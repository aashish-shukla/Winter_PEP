#include<iostream>
#include<vector>
#include<unordered_map> 
using namespace std;
vector<int> findMissingandRepeatingEle(vector<vector<int> >&nums){
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i][0]]++;
    }
    for(int i=1;i<=nums.size();i++){
        if(mp.find(i)==mp.end())
            ans.push_back(i);
    }
    for(auto i:mp){
        if(i.second>1)
            ans.push_back(i.first);
    }
    return ans;
}