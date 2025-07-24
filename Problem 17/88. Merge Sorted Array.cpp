#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> result(m + n);
        {
            return;
        }
        if (m == 0)
        {
            nums1 = nums2;
            return;
        }
        int a = 0;
        int b = 0;
        int i = 0;

        while (a < m && b < n)
        {
            if (nums1[a] < nums2[b])
            {
                result[i++] = nums1[a++];
            }
            else
            {
                result[i++] = nums2[b++];
            }
        }

        while (a < m)
            result[i++] = nums1[a++];
        while (b < n)
            result[i++] = nums2[b++];

        for (int j = 0; j < m + n; ++j)
        {
            nums1[j] = result[j];
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    sol.merge(nums1, m, nums2, n);

    for (int num : nums1)
    {
        cout << num << " ";
    }

    return 0;
}
