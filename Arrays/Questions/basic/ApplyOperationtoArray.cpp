#include<iostream>
#include<vector>
using namespace std;
vector<int> applyOperations(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        if(i%2==0)
            nums[i] = nums[i]*2;
        else
            nums[i] = nums[i]*3;
    }
    return nums;
}