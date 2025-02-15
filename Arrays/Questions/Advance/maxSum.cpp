// You are given a 0-indexed array nums consisting of positive integers. You can choose two indices i and j, such that i != j, and the sum of digits of the number nums[i] is equal to that of nums[j].

// Return the maximum value of nums[i] + nums[j] that you can obtain over all possible indices i and j that satisfy the conditions.

 

// Example 1:

// Input: nums = [18,43,36,13,7]
// Output: 54
// Explanation: The pairs (i, j) that satisfy the conditions are:
// - (0, 2), both numbers have a sum of digits equal to 9, and their sum is 18 + 36 = 54.
// - (1, 4), both numbers have a sum of digits equal to 7, and their sum is 43 + 7 = 50.
// So the maximum sum that we can obtain is 54.
// Example 2:

// Input: nums = [10,12,19,14]
// Output: -1
// Explanation: There are no two numbers that satisfy the conditions, so we return -1.

#include<iostream>
#include<vector>
using namespace std;
int maxSum(vector<int>& nums) {
        
        vector<int> sum(82,0);
        for(int i=1;i<=81;i++){
            int x=i;
            while(x){
                sum[i]+=x%10;
                x/=10;
            }
        }
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(sum[nums[i]]==sum[nums[j]]){
                    ans=max(ans,nums[i]+nums[j]);
                }
            }
        }
        return ans;
    }
