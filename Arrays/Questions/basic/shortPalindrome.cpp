#include<iostream>
#include<algorithm>
using namespace std;
int shortPalindrome(string s){
    int n=s.length();
    int count=0;
    for(int i=0;i<n-3;i++){
        for(int j=i+3;j<n;j++){
            if(s[i]==s[j] && s[i+1]==s[j-1]){
                count++;
            }
        }
    }
    return count;
}