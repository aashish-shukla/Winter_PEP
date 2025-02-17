#include<iostream>
#include<algorithm>
using namespace std;
void jaggedSwap(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min = *min_element(arr,arr+n);
    if(min==arr[0]){
        cout<<"YES"<<endl;
    }
    else{
        int i=0;
        while(i<n && arr[i]==min)
            i++;
        while(i<n && arr[i]>min)
            i++;
        if(i==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        jaggedSwap();
    }
    return 0;
}