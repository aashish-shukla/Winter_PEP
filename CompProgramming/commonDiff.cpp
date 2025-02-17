#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j && ((a[j]-a[i])==(j-i))){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}