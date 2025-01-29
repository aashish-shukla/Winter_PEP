#include <iostream>
using namespace std;
// int fib(int n){
//     if(n==0||n==1){
//         return n;
//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
// }

// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return the count of distinct ways to climb to the top.
// Note: The order of the steps taken matters.

// Examples:

// Input: N = 3
// Output: 3
// Explanation:

// There are three distinct ways of climbing a staircase of 3 steps :

// [1, 1, 1], [2, 1] and [1, 2].


// Another axample
// Input: N = 2
// Output: 2
// Explanation:

// There are two distinct ways of climbing a staircase of 3 steps :

// [1, 1] and [2].

// Approach: The problem can be solved using recursion. The idea is to find the number of ways to reach
// the Nth step by taking either 1 step or 2 steps at a time. The total number of ways to reach the Nth step
// is equal to the sum of the number of ways to reach the
// (N-1)th
// step and the number of ways to reach the
// (N-2)th
// step. This is because to reach the Nth step, we can either take 1 step from the
// (N-1)th
// step or 2 steps from the
// (N-2)th
// step. The base cases for the recursion are when N is 0 or 1, in which case there is only one way to reach
int countWays(int N) {
    if (N == 0 || N == 1) {
        return 1;
    }
    return countWays(N - 1) + countWays(N - 2);
}
int main(){
    int N = 4;
    cout << countWays(N);
    return 0;

}
int main(){
    int n=5;
    cout<<countWays(n);
    return 0;
}