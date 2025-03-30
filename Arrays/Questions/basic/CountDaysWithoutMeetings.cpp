#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int countDays(int days,vector<vector<int> > &meetings){
    vector<int> v(days+2,0);
    for(int i=0;i<meetings.size();i++){
        v[meetings[i][0]]++;
        v[meetings[i][1]+1]--;
    }
    int ans=0,curr=0;
    for(int i=1;i<=days;i++){
        curr+=v[i];
        if(curr==0) ans++;
    }
    return ans;
    
}