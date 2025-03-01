#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longestFibSeqLength(vector<int>& A) {
    int n=A.size();
    unordered_set<int> s(A.begin(),A.end());
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int a=A[i],b=A[j],l=2;
            while(s.find(a+b)!=s.end()){
                b=a+b;
                a=b-a;
                l++;
            }
            ans=max(ans,l);
        }
    }
    return ans>2?ans:0; 
}