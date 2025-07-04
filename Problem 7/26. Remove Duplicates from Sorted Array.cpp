#include <iostream>
#include "vector"
#include <sstream>
#include <string>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int c = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[c - 1])
            {
                nums[c] = nums[i];
                c++;
            }
        }
        return c;
    }
};