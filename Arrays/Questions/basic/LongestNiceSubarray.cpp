#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longestNiceSubarray(vector<int> &nums){
    //apply sliding window approach
    int left=0, bitNum=0, res=0;
    for(int right=0;right<nums.size();right++){
        while((bitNum & nums[right])!=0){
            bitNum^=nums[left];
            left++;
        }
        bitNum^=nums[right];
        res=max(res, right-left+1);

    }
    return res;
}