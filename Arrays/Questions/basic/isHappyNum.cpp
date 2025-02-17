#include<iostream>
#include<vector>
using namespace std;
bool isHappy(int n) {
    int sum=0;
    while(n>0){
        int rem=n%10;
        sum+=rem*rem;
        n=n/10;
    }
    if(sum==1){
        return true;
    }
    if(sum==4){
        return false;
    }
    return isHappy(sum);
}
int main(){
    int n;
    cin>>n;
    cout<<isHappy(n)<<endl;
    return 0;
}