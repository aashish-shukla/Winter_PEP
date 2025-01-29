// #include<iostream>
// using namespace std;
// // void bubbleSort(int arr[],int n){
// //     for(int i=0;i<n-1;i++){
// //         for(int j=0;j<n-i-1;j++){
// //             if(arr[j]>arr[j+1]){
// //                 swap(arr[j],arr[j+1]);
// //             }
// //         }
// //     }
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }
// //optimized bubble sort
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         bool swapped=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false){
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[5]={3, 7 ,2 ,1 ,0};
//     bubbleSort(arr,5);
    
// }


//merge two sorted arrays
// #include<iostream>
// using namespace std;
// void merge(int arr1[],int arr2[],int n,int m){
//     int i=0,j=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             cout<<arr1[i]<<" ";
//             i++;
//         }
//         else{
//             cout<<arr2[j]<<" ";
//             j++;
//         }
//     }
//     while(i<n){
//         cout<<arr1[i]<<" ";
//         i++;
//     }
//     while(j<m){
//         cout<<arr2[j]<<" ";
//         j++;
//     }

// }
// int main(){
//     int arr1[4]={1,2,3,3};
//     int arr2[6]={3,4,5,5,7,9};
//     merge(arr1,arr2,4,6);
// }

//majority elements that appears more than n/3 times
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> majorityElement(vector<int>& nums) 
// {
//         int n=nums.size();
//         int num1=-1,num2=-1,count1=0,count2=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==num1){
//                 count1++;
//             }
//             else if(nums[i]==num2){
//                 count2++;
//             }
//             else if(count1==0){
//                 num1=nums[i];
//                 count1++;
//             }
//             else if(count2==0){
//                 num2=nums[i];
//                 count2++;
//             }
//             else{
//                 count1--;
//                 count2--;
//             }
//         }
//         count1=0;
//         count2=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==num1){
//                 count1++;
//             }
//             else if(nums[i]==num2){
//                 count2++;
//             }
//         }
//         vector<int> res;
//         if(count1>n/3){
//             res.push_back(num1);
//         }
//         if(count2>n/3){
//             res.push_back(num2);
//         }
//         return res;
//     }

//another approach
//majority elements that appears more than n/3 times

#include<iostream>
#include<vector>
using namespace std;

vector<int> majorityElement(vector<int>& nums) 
{
        int n=nums.size();
        int num1=-1,num2=-1,count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num1){
                count1++;
            }
            else if(nums[i]==num2){
                count2++;
            }
            else if(count1==0){
                num1=nums[i];
                count1++;
            }
            else if(count2==0){
                num2=nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num1){
                count1++;
            }
            else if(nums[i]==num2){
                count2++;
            }
        }
        vector<int> res;
        if(count1>n/3){
            res.push_back(num1);
        }
        if(count2>n/3){
            res.push_back(num2);
        }
        return res;
    }

