#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring (string s) {
    int flag[300] = {0};
    int left = 0,right = 0;
    int ans = 0;
    while(right < s.size()){
        while(flag[s[right]]){
            flag[s[left]]--;
            left++;
        }
        flag[s[right]] = 1;
        ans = max(ans,right - left + 1);
        right++;
    }
    return ans;
}

int main()
{
    string s;
    while (true) {
        cout << "Please enter in a string: ";
        cin >> s;
        if ( s == "stop") break;
        cout << "The length of Longest Substring is " << lengthOfLongestSubstring(s) << ".\n";
    }
    return 0;
}
