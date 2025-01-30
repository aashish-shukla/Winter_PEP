// Problem statement
// Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

// Example:

// We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
// based indexing so the subarray {5, 6} will be reversed and our 
// output array will be {1, 2, 3, 4, 6, 5}.

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int m){
    int n=arr.size();
    for(int i=m;i<(n+m)/2;i++){
        int temp=arr[i];
        arr[i]=arr[n+m-i-1];
        arr[n+m-i-1]=temp;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
