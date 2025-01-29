#include<iostream>
using namespace std;
// vector<bool> isPrime(int n){
//     vector<bool> prime(n+1,true);
//     prime[0]=prime[1]=false;
//     for(int i=2;i*i<=n;i++){
//         if(prime[i]){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=false;
//             }
//         }
//     }
//     return prime;

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<bool> prime=isPrime(n);
//     for(int i=0;i<=n;i++){
//         if(prime[i]){
//             cout<<i<<" ";
//         }
//     }
// }

//by using linear search to find key in 2D array
// find sum all elements in 2D array
// int main(){
//     int n=3,m=4;
//     int a[3][4]={{1,2,3,4},
//                  {5,6,7,8},
//                  {9,10,11,12}};
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             sum+=a[i][j];
//         }
//     }
//     cout<<sum;
// }
    

//print 2d array in wave form
int main(){
    int n=3,m=4;
    int a[3][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}

//spirally print 2D array
int main(){
    int n=3,m=4;
    int a[3][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};
    int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
    while(row_start<=row_end && col_start<=col_end){
        for(int i=col_start;i<=col_end;i++){
            cout<<a[row_start][i]<<" ";
        }
        row_start++;
        for(int i=row_start;i<=row_end;i++){
            cout<<a[i][col_end]<<" ";
        }
        col_end--;
        if(row_start<=row_end){
            for(int i=col_end;i>=col_start;i--){
                cout<<a[row_end][i]<<" ";
            }
            row_end--;
        }
        if(col_start<=col_end){
            for(int i=row_end;i>=row_start;i--){
                cout<<a[i][col_start]<<" ";
            }
            col_start++;
        }
    }
}
    
