#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

void primeFactors(int n){
    int temp=n;
    for(int i=2;i<=sqrt(n);i++){
        if(temp%i==0){
            cout<<i<<" ";
            while(temp%i==0){
                temp/=i;
            }
        }

    }
    if(temp>1){
        cout<<temp;
    }
}
int main(){
    int n;
    cin>>n;
    primeFactors(n);
}