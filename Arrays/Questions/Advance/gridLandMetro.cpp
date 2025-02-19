#include<iostream>
#include<vector>
using namespace std;
int gridLandMetro(int n, int m, int k, vector<vector<int>> track){
    long long int ans=0;

    
    for(int i=0;i<k;i++){
        int r=track[i][0];
        int c1=track[i][1];
        int c2=track[i][2];
        ans+=(c2-c1+1);
    }
    return ans;

}
