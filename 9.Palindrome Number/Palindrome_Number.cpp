#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0)
        return false;
    if (x < 10)
        return true;
    int tmp = x;
    int len = 0;
    while(tmp){
        tmp /= 10;
        ++len;
    }
    int left = (int) pow(10, len - 1);
    int right = 1;
    while(left > right){
        if (x / left % 10 != x / right % 10)
            return false;
        left /= 10;
        right *= 10;
    }
    return true;
}

int main() {

    if (isPalindrome(121))
        cout << "true";
    else
        cout << "false";

    return 0;
}
