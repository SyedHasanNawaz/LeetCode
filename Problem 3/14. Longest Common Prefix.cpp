#include <iostream>
#include "vector"
#include <sstream>
#include <string>

using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // istringstream iss(strs);
        // string word;
        // int count = 0;

        // while (iss >> word)
        // {
        //     count++;
        // }
        if (strs.empty())
            return "";

        string prefix;

        for (int i = 0; i < strs[0].size(); ++i)
        {
            for (int j = 1; j < strs.size(); ++j)
            {
                if (i >= strs[j].size() || strs[j][i] != strs[0][i])
                    return prefix;
            }
            prefix += strs[0][i];
        }
        return prefix;
    }
};
