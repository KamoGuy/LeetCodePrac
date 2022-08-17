
#include <string>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = int(s.length()), len = 0;
        map<char, int> chars;

        for (int j = 0, i = 0; j < n; j++){
            if(chars[s[j]] > 0) {
                i = max(chars[s[j]], i);
            }
            len = max(len, j - i + 1);
            chars[s[j]] = j + 1;
        }
        cout<<len<<endl;
        return len;
    }
};

int main(int argc, char**argv){
    Solution test;

    test.lengthOfLongestSubstring("abcabcbb");
    test.lengthOfLongestSubstring("bbbb");
    test.lengthOfLongestSubstring("pwwkew");
    test.lengthOfLongestSubstring("au");
    test.lengthOfLongestSubstring("dvdf");
    test.lengthOfLongestSubstring("ynyo");
    test.lengthOfLongestSubstring(" ");

    return 0;

}