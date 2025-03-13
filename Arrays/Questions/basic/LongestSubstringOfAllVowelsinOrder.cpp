#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int longestSubstringOfAllVowelsInOrder(string s){
    unordered_map<char,int>mp;
    int maxCount=0;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        maxCount=max(maxCount,mp[s[i]]);
    }
    int res=maxCount;
    return res;
}