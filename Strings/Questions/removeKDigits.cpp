#include<iostream>
#include<stack>
using namespace std;
string removeKDigits(string num, int k) {
    stack<char> st;
    for(char c:num){
        while(!st.empty() && k>0 && st.top()>c){
            st.pop();
            k--;
        }
        if(!st.empty() || c!='0'){
            st.push(c);
        }
    }
    while(!st.empty() && k>0){
        st.pop();
        k--;
    }
    if(st.empty()){
        return "0";
    }
    string res="";
    while(!st.empty()){
        res=st.top()+res;
        st.pop();
    }
    return res;
    
}