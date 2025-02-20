#include<iostream>
using namespace std;
// Input: n = 3, k = 9
// Output: "cab"
// Explanation: There are 12 different happy string of length 3 ["aba", "abc", "aca", "acb", "bab", "bac", "bca", "bcb", "cab", "cac", "cba", "cbc"]. You will find the 9th string = "cab"

string getHappyString(int n, int k) {
        string res;
        for (int i = 0; i < 3; ++i) {
            string s(1, 'a' + i);
            int cnt = 1 << (n - 1);
            if (k > cnt) {
                k -= cnt;
                continue;
            }
            res += s;
            while (res.size() < n) {
                cnt >>= 1;
                if (k > cnt) {
                    k -= cnt;
                    res.back()++;
                } else {
                    res += res.back() == 'a' ? 'b' : 'a';
                }
            }
            return res;
        }
        return "";
    }