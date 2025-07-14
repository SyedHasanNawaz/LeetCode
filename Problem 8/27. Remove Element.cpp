#include <iostream>
#include "vector"
#include <string>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size();
        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == val)
            {
                continue;
            }
            else
            {
                counter++;
            }
        }

        return counter = counter - 1;
    }
};

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    Solution sol;
    int result = sol.removeElement(nums, val);
    cout << "Length without value " << val << ": " << result << endl;
    return 0;
}