#include<iostream>
#include<vector>
using namespace std;
//merge two sorted arrays
void merge(vector<int>& arr1, vector<int>& arr2, int n, int m) {
    int i = 0, j = 0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }

    while(i<n){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }

    
}