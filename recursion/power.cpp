#include <iostream>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    else{
        return n*power(n,p-1);
    }
}
int main(){
    int n=2,p=3;
    cout<<power(n,p);   

}