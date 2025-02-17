#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str="abacabde";
    int n=str.length();
    vector<int> count(26,0);

    for(char c:str){
        count[c-'a']++;
    }
    for(int i=0;i<26;i++){
        cout<<char(i+'a')<<" "<<count[i]<<endl;
    }
    


}