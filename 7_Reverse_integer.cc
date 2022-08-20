#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int nextNum = 0;
        int ans = 0;

        while (x !=0){
            nextNum = x%10;
            x/=10;                                      
            if (ans > INT_MAX/10 || (ans == INT_MAX/10 && x > 7)) return 0;        //check if the reverse will go out of the max and min value of a 32 bit int;
            if (ans < INT_MIN/10 || (ans == INT_MIN/10 && x < -8)) return 0;
            ans= ans*10 + nextNum;          
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution test;

    cout<<test.reverse(-25164)<<endl;
    cout<<test.reverse(1951649799)<<endl;
    return 0;
}
