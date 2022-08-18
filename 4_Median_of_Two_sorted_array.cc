#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> cVec= nums1;
        double ans = 0;
        cVec.insert(cVec.end(), nums2.begin(), nums2.end());

        sort(cVec.begin(), cVec.end());

        int i = 0;
        int j = cVec.size()-1;
        while (i <j){
            i++;
            j--;
        }

        ans = double (cVec[i] + cVec[j])/ 2.0;

        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution test;
    vector<int> a1;
    vector<int> a2;

    a1.push_back(1);
    a1.push_back(3);
    a2.push_back(2);
    a2.push_back(7);

    cout << test.findMedianSortedArrays(a1, a2)<< endl;

    return 0;
}
