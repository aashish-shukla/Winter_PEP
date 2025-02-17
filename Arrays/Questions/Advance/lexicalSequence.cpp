#include<iostream>
#include<vector>   
using namespace std;
//  Construct the Lexicographically Largest Valid Sequence

vector<int> constructDistancedSequence(int n) {
    vector<int> ans(2*n-1,-1);
    vector<bool> vis(n+1,false);
    bool flag=false;
    for(int i=0;i<2*n-1;i++){
        if(ans[i]==-1){
            for(int j=n;j>=1;j--){
                if(j==1){
                    flag=true;
                }
                if(vis[j]==false){
                    if(j==1){
                        ans[i]=j;
                        vis[j]=true;
                        break;
                    }
                    if(i+j<2*n-1 && ans[i+j]==-1){
                        ans[i]=j;
                        ans[i+j]=j;
                        vis[j]=true;
                        break;
                    }
                }
            }
        }
        if(flag){
            break;
        }
    }
    return ans;
}