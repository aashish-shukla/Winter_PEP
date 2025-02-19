#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        int max=*max_element(nums.begin(),nums.end());
        return max * k + (k * (k - 1)) / 2;
    }
    

        
