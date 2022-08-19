#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> rows(min(numRows, int(s.size())));
        string ans;
        bool go_down = false;

        if (numRows == 1){
            return s;
        }
        int currRow=0;
        for(char c : s){
            rows[currRow]+=c;    
            if (currRow == 0 || currRow == numRows-1){
                go_down = !go_down;
            } 
            currRow += go_down ? 1 : -1;
        }

        for(string row : rows){
            ans += row;
            cout<<row<<endl;
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution test;
    cout<<test.convert("ab",1)<<endl;
    return 0;
}
