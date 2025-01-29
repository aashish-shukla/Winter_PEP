// Given a sequence of numbers ‘ARR’. Your task is to return a sorted sequence of ‘ARR’ in non-descending order with help of the merge sort algorithm.

// Example :

// Merge Sort Algorithm -

// Merge sort is a Divide and Conquer based Algorithm. It divides the input array into two-parts, until the size of the input array is not ‘1’. In the return part, it will merge two sorted arrays a return a whole merged sorted array.

// The above illustrates shows how merge sort works.
// Note :
// It is compulsory to use the ‘Merge Sort’ algorithm.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 50
// 1 <= N <= 10^4
// -10^9 <= arr[i] <= 10^9

// Time Limit : 1 sec
// Sample Input 1 :
// 2
// 7
// 3 4 1 6 2 5 7
// 4
// 4 3 1 2
// Sample Output 1 :
// 1 2 3 4 5 6 7
// 1 2 3 4
// Explanation For Sample Input 1:
// Test Case 1 :

// Given ‘ARR’ : { 3, 4, 1, 6, 2, 5, 7 }

// Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4, 5, 6, 7 }. Non-descending order means every element must be greater than or equal to the previse element.

// Test Case 2 :

// Given ‘ARR’ : { 4, 3, 1, 2 }

// Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4 }. 
// Sample Input 2 :
// 2
// 4
// 5 4 6 7
// 3
// 2 1 1
// Sample Output 2 :
// 4 5 6 7
// 1 1 2
// C++ (g++ 5.4)
// 123
// void mergeSort(vector < int > & arr, int n) {
//     // Write your code here.
// }
// Last saved at 10:08 AM

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
