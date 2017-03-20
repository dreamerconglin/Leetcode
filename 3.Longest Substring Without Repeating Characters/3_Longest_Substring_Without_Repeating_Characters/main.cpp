#include <iostream>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
         int cnt[300] = {0};
        int lhs = 0,rhs = 0;
        int res = 0;
        while(rhs < s.size()){
            while(cnt[s[rhs]]){
                cnt[s[lhs]]--;
                lhs++;
            }
            cnt[s[rhs]] = 1;
            res = max(res,rhs - lhs + 1);
            rhs++;
        }
        return res;
}

int main()
{
    string s = "pwwkew";
    cout << lengthOfLongestSubstring(s);

    return 0;
}
