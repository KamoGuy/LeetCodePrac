#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        bool pos = true;
        vector<char> pos_neg;
        vector<int> digits;
        for( char c : s){
            if (ans == 0 && (c !=  ' '  && c != '-' && c != '+' && !isdigit(c))) return ans;
            if ((digits.size() > 0) && !isdigit(c)) return ans;
            //if ((ans > 0 || ans < 0) && !isdigit(c)) return ans;
            if (pos_neg.size()>0 && !isdigit(c)) return 0;

            if(c == '-'){
                pos = false;
                pos_neg.push_back('-');
            }
            if(c == '+'){
                pos_neg.push_back('+');
            }

            if(pos_neg.size() > 1) return 0;
            

            if (isdigit(c)){
                int c_int = c - 48;
                digits.push_back(c_int);
                if (pos== false) {
                    c_int*=-1;
                }
                if (ans > INT_MAX/10 || (ans == INT_MAX/10 && c_int > 7)) return INT_MAX;        //check if the coversion will go out of the max and min value of a 32 bit int;
                if (ans < INT_MIN/10 || (ans == INT_MIN/10 && c_int < -8)) return INT_MIN;
                
                ans = ans * 10 + (c_int);
                //ans = ans*10 + atoi(c);
            }
        }
        //if (!pos) return ans * (-1);
        return ans;
        
    }
};

int main(int argc, char const *argv[])
{
    Solution test;

    cout<< test.myAtoi("  554 ")<<endl;
    cout<< test.myAtoi("sda4564w")<<endl;    
    cout<< test.myAtoi("   -42")<< endl;    
    cout<< test.myAtoi("   +-42")<< endl;    
    return 0;
}
