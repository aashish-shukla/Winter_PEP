// Method-1
#include<iostream>
using namespace std;
int trail(int n){
    int count=0;
    int res=1;
    for(int i=2;i<=n;i++){
        res*=i;   
    }
    while(res%10==0){
        count++;
        res/=10;
        
    }
    return count;

}
int main(){
    int n;
    cin>>n;
    cout<<trail(n);
}

//Method-2:: Optimal Solution
#include<iostream>
using namespace std;
int trail(int n){
    int res=0;
    for(int i=5;i<=n;i*=5){
        res+=n/i;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<trail(n);
}
