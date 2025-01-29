#include<iostream>
#include<unordered_set>
using namespace std;
int sqAdd(int num){
    int temp=num;
    int sum=0;
    while(num>0){
        temp=num%10;
        sum+=temp*temp;
        num/=10;
    }
    return sum;
}
bool happy(int num){
    unordered_set<int>happy;
    while(num!=1 && happy.count(num) == 0){
        happy.insert(num);
        num=sqAdd(num);
    }
    return num==1;
}
int main(){
    int n;
    cin>>n;
    if(happy(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}

