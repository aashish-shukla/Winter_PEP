#include<iostream>
#include<vector>
using namespace std;
string countLuck(vector<string> matrix, int k) {
    int n=matrix.size();
    int m=matrix[0].length();
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    int starti=0,startj=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]=='M'){
                starti=i;
                startj=j;
                break;
            }
        }
    }
    int count=0;
    bool flag=false;
    vector<int> dx={-1,1,0,0};
    vector<int> dy={0,0,-1,1};
    vector<char> dir={'U','D','L','R'};
    vector<char> path;
    vector<char> temp;
    vector<vector<char>> paths;
    function<void(int,int)> dfs=[&](int i,int j){
        if(i<0 || i>=n || j<0 || j>=m || matrix[i][j]=='X' || visited[i][j]){
            return;
        }
        if(matrix[i][j]=='*'){
            paths.push_back(path);
            return;
        }
        visited[i][j]=true;
        for(int k=0;k<4;k++){
            path.push_back(dir[k]);
            dfs(i+dx[k],j+dy[k]);
            path.pop_back();
        }
    };
    dfs(starti,startj);
    for(auto p:paths){
        for(auto c:p){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    for(auto p:paths){
        int i=starti;
        int j=startj;
        for(auto c:p){
            if(c=='U'){
                i--;
            }else if(c=='D'){
                i++;
            }else if(c=='L'){
                j--;
            }else{
                j++;
            }
            if(i<0 || i>=n || j<0 || j>=m || matrix[i][j]=='X'){
                break;
            }
            if(matrix[i][j]=='*'){
                flag=true;
                break;
            }
        }
        if(flag){
            break;
        }
        count++;
    }
    if(count==k){
        return "Impressed";
    }else{
        return "Oops!";
    }
}