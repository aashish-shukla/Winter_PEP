//Method 1
/*
#include<iostream>
using namespace std;
bool isPalindrome(int num){
    int rev=0;
    while(num>=0){
        rev=rev+num%10;
        return rev;
    }
    if(rev==num){
        return true;
    }
    else{
        return false;
    }
    

        }
int main(){
    int n;
    cin>>n;
    bool check=isPalindrome(n);
    if(check){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False";
    }
}
*/


//method 2
#include<iostream>
using namespace std;
bool isPalindrome(int num){
    int rev=0;
    int temp=num;
    while(temp!=0){
        int id=temp%10;
        rev=rev*10+id;
        temp/=10;

    }
    return (rev==num);
}
int main(){
    int n;
    cin>>n;
    if(isPalindrome(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}