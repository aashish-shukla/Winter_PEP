#include<iostream>
using namespace std;

//for max
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    int min=INT_MAX;
    int mn=0,mx=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for max
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            mx=i+1;
        }
    }
    //for min
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            mn=i+1;
        }
    }
    cout<<"Minimum: "<<min<<"at "<<mn<<endl;
    cout<<"Maximum: "<<max<<"at "<<mx<<endl;
}


