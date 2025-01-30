#include<iostream>
#include<stack>
using namespace std;
bool isBalenced(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(str[i]== '(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else if(str[i]==')'){
            if(s.empty() || s.top()!='('){
                return false;
            }
            s.pop();
        }
        else if(str[i]=='}'){
            if(s.empty() || s.top()!='{'){
                return false;
            }
            s.pop();
        }
        else if(str[i]==']'){
            if(s.empty() || s.top()!='['){
                return false;
            }
            s.pop();

        }

    }
    return s.empty();

}
int main(){
    string str = "{[()]}";
    if(isBalenced(str)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}