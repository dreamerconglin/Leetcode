#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack <char> paren;
    for (auto x:s){
        switch(x){
        case '(':
        case '[':
        case '{': paren.push(x);break;
        case ')': if (paren.empty() || paren.top() != '(') return false; else paren.pop(); break;
        case ']': if (paren.empty() || paren.top() != '[') return false; else paren.pop(); break;
        case '}': if (paren.empty() || paren.top() != '{') return false; else paren.pop(); break;
        }
    }
    return paren.empty();
}

int main () {
    while (true) {
        string s;
        cout << "Please enter in a string: ";
        cin >> s;
        if (s == "stop") break;
        isValid(s) ? cout << "true\n" : cout << "false\n";
    }
    return 0;
}
