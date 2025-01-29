#include<iostream>
using namespace std;
int arrSum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arrSum(arr,n-1)+arr[n-1];
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<arrSum(arr,5);
    return 0;
}

//make me understand the code!!


