#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows) {
    if (numRows <= 1)
        return s;
    const int len = (int)s.length();
    string *subs = new string[numRows];

    int row = 0, step = 1;
    for (int i = 0; i < len; ++i) {
        subs[row].push_back(s[i]);

        if (row == 0)
            step = 1;
        else if (row == numRows - 1)
            step = -1;

        row += step;
    }
    s.clear();
    for (int i = 0; i < numRows; ++i)
        s += subs[i];
    return s;
}

int main(){

    string s = "PAYPALISHIRING";
    cout << convert(s, 3) << endl;
    system("pause");
    return 0;
}
