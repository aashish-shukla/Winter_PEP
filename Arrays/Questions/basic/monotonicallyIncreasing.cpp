#include<iostream>
#include<vector>
using namespace std;
vector<int> monotonic(vector<int> &arr){
    vector<int>ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(i==0){
            ans.push_back(arr[i]);
        }
        else{
            if(arr[i]>=arr[i-1]){
                ans.push_back(arr[i]);
            }
        }
    }
    return ans;
}
int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>ans=monotonic(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}