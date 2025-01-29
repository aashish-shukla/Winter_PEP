#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restArray= isSorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}
