#include<iostream>
#include<vector>
using namespace std;
vector<int> quickSort(vector<int> arr){
    int pivot=arr[0];
    vector<int> left,right,equal;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<pivot){
            left.push_back(arr[i]);
        }else if(arr[i]>pivot){
            right.push_back(arr[i]);
        }else{
            equal.push_back(arr[i]);
        }
    }
    vector<int> ans;
    for(int i=0;i<left.size();i++){
        ans.push_back(left[i]);
    }
    for(int i=0;i<equal.size();i++){
        ans.push_back(equal[i]);
    }
    for(int i=0;i<right.size();i++){
        ans.push_back(right[i]);
    }
    return ans;
}