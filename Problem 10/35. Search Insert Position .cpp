#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int r = 0;
        for (int i = 0; i < n; ++i)
        {

            if (nums[i] == target)
            {
                return i;
            }
            else if (nums[i] > target)
            {
                r = i;
                return r;
            }

            else if (i == n - 1)
            {
                return i + 1;
            }
        }
        return 1;
    }
};
