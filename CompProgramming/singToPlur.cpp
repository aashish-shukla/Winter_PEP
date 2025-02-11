#include<iostream>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    string s1="";
    for(int i=0;i<n-2;i++){
        s1+=s[i];
    }
    s1+="i";
    cout<<s1<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}