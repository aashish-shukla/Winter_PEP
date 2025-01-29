//Method-1
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
        
}

int main(){
    int n;
    cin>>n;
    int factorial=fact(n);
    cout<<factorial;
}

//Method-2
#include<iostream>
using namespace std;
int fact(int n){
    int res=1;
    for(int i=2;i<=n;i++){
        res*=i;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);

}

