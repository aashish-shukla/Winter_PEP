// input: "Hello how are you"
// output: "you are how Hello"
#include <iostream>
#include <stack>
using namespace std;
void reverseString(string str) {
    stack<string> s;
    for (int i = 0; i < str.length(); i++) {
        string word = "";
        while (str[i] != ' ' && i < str.length()) {
            word += str[i];
            i++;
        }
        s.push(word);
    }
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main() {
    string str = "Hello how are you";
    reverseString(str);
    return 0;
}