#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int maxAbsSumSubArray(vector<int>& nums) {
    int n=nums.size();
    int maxSum=INT_MIN;
    int minSum=INT_MAX;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        maxSum=max(maxSum,sum);
        minSum=min(minSum,sum);
        if(sum<0){
            sum=0;
        }
    }
    return max(maxSum,-minSum);
}