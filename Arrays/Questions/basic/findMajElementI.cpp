#include<iostream>
#include<vector>
using namespace std;
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

int majorityElement(vector<int> nums) {
    int n=nums.size();
    int num=nums[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(nums[i]==num){
            count++;
        }else{
            count--;
        }
        if(count==0){
            num=nums[i];
            count=1;
        }
    }
    return num;
}