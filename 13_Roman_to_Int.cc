#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans =0;

        for (int i = 0; i< s.length(); i++){
            if (s[i] == 'I'){
                ans+=1;
            }
            if (s[i] == 'V'){
                if(i!=0 && s[i-1]=='I'){
                    ans+=3;
                }
                else{
                    ans+=5;
                }
            }
            if (s[i] == 'X'){
                if(i!=0 && s[i-1]=='I'){
                    ans+=8;
                }
                else{
                    ans+=10;
                }
            }
            if (s[i] == 'L'){
                if(i!=0 && s[i-1]=='X'){
                    ans+=30;
                }
                else{
                    ans+=50;
                }
            }
            if (s[i] == 'C'){
                if(i!=0 && s[i-1]=='X'){
                    ans+=80;
                }
                else{
                    ans+=100;
                }
            }
            if (s[i] == 'D'){
                if(i!=0 && s[i-1]=='C'){
                    ans+=300;
                }
                else{
                    ans+=500;
                }
            }
            if (s[i] == 'M'){
                if(i!=0 && s[i-1]=='C'){
                    ans+=800;
                }
                else{
                    ans+=1000;
                }
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution test;

    cout<< test.romanToInt("III")<<endl;
    cout<< test.romanToInt("LVIII")<<endl;
    cout<< test.romanToInt("MCMXCIV")<<endl;

    return 0;
}
