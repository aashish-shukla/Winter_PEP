#include<iostream>
#include<vector>
using namespace std;
string rearrangedPalindrome(string s){
    int n=s.length();
    vector<int> count(26,0);
    for(char c:s){
        count[c-'a']++;
    }
    int odd=0;
    for(int i=0;i<26;i++){
        if(count[i]%2!=0){
            odd++;
        }
    }
    if(odd>1){
        return "NO";
    }
    return "YES";
}