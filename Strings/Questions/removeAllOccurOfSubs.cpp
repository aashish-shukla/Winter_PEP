#include<iostream>
using namespace std;
// Function to remove all occurrences of a substring from a string
// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"

string removeOccurrences(string s, string part) {
    string res;
        int target=part.length();
        char end= part.back();
        for(char ch: s){
            res.push_back(ch);
            if(ch==end && res.size()>=target){
                if(res.substr(res.size()-target)==part){
                    res.erase(res.size()-target);
                }
            }
        }
        return res;
}