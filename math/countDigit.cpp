

// #include<iostream>
// using namespace std;
// int main(){
//     int num,count=0;
//     cin>>num;
//     while(num>0){
//         num=num/10;
//         count++;
//     }
//     cout<<count;
    
// }

#include<iostream>
using namespace std;
int count(int n){
    if(n==0){
        return 1;
    }
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<count(n);
}


