#include <iostream>
#include <vector>
using namespace std;

int reverse(int x) {
    if (!x)
        return 0;
    while (x%10 == 0)
        x /= 10;
    long long int sum = 0;
    while (x){
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    int res = (int) sum;
    if (res == sum)
        return res;
    else
        return 0;
}

int main() {
    int x = 123456789;
    int r = reverse(x);
    cout << r;
    return 0;
}
