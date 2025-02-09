#include<iostream>
#include<stack>
using namespace std;

string balancedParenthesis(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return "NO";
            }
            char c=st.top();
            st.pop();
            if(s[i]==')' && c!='('){
                return "NO";
            }
            if(s[i]=='}' && c!='{'){
                return "NO";
            }
            if(s[i]==']' && c!='['){
                return "NO";
            }
        }
    }
    if(st.empty()){
        return "YES";
    }
    return "NO";
}

int main(){
    string s;
    cin>>s;
    cout<<balancedParenthesis(s);
    return 0;
}
    