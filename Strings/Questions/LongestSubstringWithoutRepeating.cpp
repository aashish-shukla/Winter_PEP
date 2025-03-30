#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int lengthOfLongestSubstring(string s){
    //apply sliding window approach
    int left=0, res=0;
    unordered_set<char> st;
    for(int right=0;right<s.size();right++){
        while(st.find(s[right])!=st.end()){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        res=max(res, right-left+1);
    }
    return res;
}
