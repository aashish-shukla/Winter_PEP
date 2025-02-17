#include<iostream>
#include<algorithm>
using namespace std;
void ambitiousKid(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=abs(arr[i]);
    }
    sort(arr,arr+n);
    cout<<arr[0]<<endl;
}
int main(){
    
        ambitiousKid();
    return 0;
}