// You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. You have to find the reverse of the string.

// For example:

//  If the given string is: STR = "abcde". You have to print the string "edcba".
// follow up:
// Try to solve the problem in O(1) space complexity. 
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ |STR| ≤ 10 ^ 5 

// Where |STR| is the length of the string STR.

// Time limit: 1 sec.
// Sample Input 1:
// 3
// abcde
// coding
// hello1
// Sample Output 1:
// edcba
// gnidoc
// 1olleh
// Explanation of the Sample Input 1:
// For the first test case, STR = "abcde". We need to reverse the string, that is the first element becomes the last element and the last element becomes the first element, the second element becomes the second last element and the second last element becomes the second element and so on. So we get, "edcba".
// Sample Input 2:
// 3
// a
// 1det@Z
// $1xYuP
// Sample Output 2
// a
// Z@ted1
// PuYx1$
// C++ (g++ 5.4)
// 123456789101112
//     }
// }
// Last saved at 8:44 AM
// Sample test case
// Custom test case


// Compilation error
// Compilation Failed
// In file included from runner.cpp:6:0:
// solution.h: In function 'std::__cxx11::string reverseString(std::__cxx11::string)':
// solution.h:6:21: error: cannot convert 'std::__cxx11::string {aka std::__cxx11::basic_string}' to 'const char*' for argument '1' to 'size_t strlen(const char*)'
//      int j=strlen(str)-1;
//                      ^


#include <iostream>
#include <string>
using namespace std;

string reverseString(string str){
    int j=str.length-1;
    for(int i=0;i<j;i++,j--){
        swap(str[i],str[j]);
    }
    return str;
}