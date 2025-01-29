//Naive Approach
#include<iostream>
using namespace std;
int hcf(int a,int b){
    int n=min(a,b);
    while(n>0){
        if(a%n==0 && b%n==0){
            break;
        }
        n--;
    }
    return n;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
}

//Euclidean Algorithm
#include<iostream>
using namespace std;
int hcf(int a,int b){

    if(b==0){
        return a;
    }
    return hcf(b,a%b);   
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
}
