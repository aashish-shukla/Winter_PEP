#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int noOfSubarraywithOddSum(vector<int>& nums){
    int n=nums.size();
    int odd=0,even=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum%2==0){
            even++;
        }else{
            odd++;
        }
    }
    return odd*even+odd+even;
}