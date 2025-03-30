#include<iostream>
#include<vector>
using namespace std;
bool isMonotonic(vector<int>& arr) {
    int n=arr.size();
    bool increasing=true;
    bool decreasing=true;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            increasing=false;
        }
        if(arr[i]>arr[i-1]){
            decreasing=false;
        }
    }
    return increasing || decreasing;
}