#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    bool flag=false;
    if(n%3!=0){
        flag=true;
    }
    if(flag){
        cout<<"FIRST"<<endl;
    }
    else{
        cout<<"SECOND"<<endl;
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