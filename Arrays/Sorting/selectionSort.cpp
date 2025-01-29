#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
    swap(arr[minIdx],arr[i]);
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int arr[5]={3, 7 ,2 ,1 ,0};
    selectionSort(arr,5);
    
}
