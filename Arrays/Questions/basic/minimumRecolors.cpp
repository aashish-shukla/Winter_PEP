#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int minimumRecolors(string blocks,int k){
    unordered_map<char,int>mp;
    int maxCount=0;
    for(int i=0;i<k;i++){
        mp[blocks[i]]++;
        maxCount=max(maxCount,mp[blocks[i]]);
    }
    int res=k-maxCount;
    for(int i=k;i<blocks.size();i++){
        mp[blocks[i-k]]--;
        if(mp[blocks[i-k]]==0){
            mp.erase(blocks[i-k]);
        }
        mp[blocks[i]]++;
        maxCount=max(maxCount,mp[blocks[i]]);
        res=min(res,k-maxCount);
    }
    return res;
}