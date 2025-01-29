#include<iostream>
using namespace std;
void quickSort(int arr[],int l,int r){
    if(l<r){
        int pivot=arr[r];
        int i=l-1;
        for(int j=l;j<r;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[r]);
        quickSort(arr,l,i);
        quickSort(arr,i+2,r);
    }
}

int main(){
    int arr[5]={3, 7 ,2 ,1 ,0};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}
