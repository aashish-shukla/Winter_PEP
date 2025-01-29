// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
// [1,2,4,7,7,5]
// Output:
// Second Smallest : 2
// Second Largest : 5
// Explanation:
// The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

#include<iostream>
#include<vector>
using namespace std;
int secondLargest(vector<int> &arr){
    int n=arr.size();
    if(n<2){
        return -1;
    }
    int first=INT_MIN, second=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    if(second==INT_MIN){
        return -1;
    }
    return second;

}
int secondSmallest(vector<int> &arr){
    int n=arr.size();
    if(n<2){
        return -1;
    }
    int first=INT_MAX, second=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first){
            second=arr[i];
        }
    }
    if(second==INT_MAX){
        return -1;
    }
    return second;

}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Second Smallest : "<<secondSmallest(arr)<<endl;
    cout<<"Second Largest : "<<secondLargest(arr)<<endl;
    return 0;
}

//optimised approach
#include<iostream>
#include<vector>
using namespace std;
int secondLargest(vector<int> &arr){
    int n=arr.size();
    if(n<2){
        return -1;
    }
    int first=INT_MIN, second=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    if(second==INT_MIN){
        return -1;
    }
    return second;

}


#include <iostream>
#include <vector>
#include <set>
using namespace std;

void findSecondSmallestAndLargest(const vector<int>& arr) {
    // Use a set to remove duplicates and sort the array
    set<int> uniqueElements(arr.begin(), arr.end());

    // Convert set to vector for indexing
    vector<int> sortedElements(uniqueElements.begin(), uniqueElements.end());

    // Check if second smallest and second largest exist
    if (sortedElements.size() < 2) {
        cout << "Second Smallest : -1" << endl;
        cout << "Second Largest : -1" << endl;
    } else {
        cout << "Second Smallest : " << sortedElements[1] << endl;
        cout << "Second Largest : " << sortedElements[sortedElements.size() - 2] << endl;
    }
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    findSecondSmallestAndLargest(input);
    return 0;
}
