// Quest: 1446. Consecutive Characters
// Level: Easy
// Data:  2021/12/13

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxPower(string s) {

        int iMax = 0;
        int iCount = 1;
        char prevChar = s[0];
        
        for (size_t i = 1; i < s.size(); i++)
        {
            //cout << s[i] << ", " <<iCount<< endl;
            if (prevChar == s[i])
            {
                iCount++;
            }
            else
            {
                cout << "?? " << iCount <<endl;
                iMax = max(iMax, iCount);
                prevChar = s[i];
                iCount = 1;
            }
        }

        // for last one
        iMax = max(iMax, iCount);

        return iMax;
    }
};

int main()
{
    Solution sol;
    string s = "leetcode";

    int ans = sol.maxPower(s);

    cout << ans << endl;

    return 0;
}
