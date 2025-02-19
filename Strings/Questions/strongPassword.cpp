#include<iostream>
#include<vector>
using namespace std;
int minimumNumber(int n, string password) {
    int count=0;
    bool digit=false;
    bool lower=false;
    bool upper=false;
    bool special=false;
    for(char c:password){
        if(c>='0' && c<='9'){
            digit=true;
        }else if(c>='a' && c<='z'){
            lower=true;
        }else if(c>='A' && c<='Z'){
            upper=true;
        }else{
            special=true;
        }
    }
    if(!digit){
        count++;
    }
    if(!lower){
        count++;
    }
    if(!upper){
        count++;
    }
    if(!special){
        count++;
    }
    if(n+count<6){
        count+=6-(n+count);
    }
    return count;
}