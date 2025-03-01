#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int n=nums.size();
    //I want less than O(n^2) time complexity

    //Approach 1: O(n^2)
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]+nums[j]==target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }

    //Approach 2: O(n)
    // for(int i=0;i<n;i++){
    //     int x=target-nums[i];
    //     for(int j=i+1;j<n;j++){

    //         if(nums[j]==x){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }
}