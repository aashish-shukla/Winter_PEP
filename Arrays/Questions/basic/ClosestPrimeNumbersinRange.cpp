#include<iostream>
#include<vector>
using namespace std;
vector<int>closestPrimes(int left,int right){
    vector<int> res;
    int minDiff=INT_MAX;
    for(int i=left;i<=right;i++){
        bool isPrime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            if(res.size()==0){
                res.push_back(i);
            }
            else{
                if(i-res[0]<minDiff){
                    res[1]=i;
                    minDiff=i-res[0];
                }
                res[0]=i;
            }
        }
    }
    return res;
}
