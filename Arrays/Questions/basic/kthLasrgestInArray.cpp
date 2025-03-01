#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int kthLargest(vector<int>& nums, int k) {
    int n=nums.size();
    int left=0;
    int right=n-1;
    while(left<=right){
        int pivot=nums[right];
        int i=left;
        for(int j=left;j<right;j++){
            if(nums[j]>pivot){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        swap(nums[i],nums[right]);
        if(i==k-1){
            return nums[i];
        }
        else if(i<k-1){
            left=i+1;
        }
        else{
            right=i-1;
        }
    }
    return -1;
}