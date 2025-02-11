#include<iostream>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    int ct=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            ct=1;
            break;
        }
        
    }
    if(ct==1){
        cout<<ct<<endl;
    }
    else{
        cout<<n<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}