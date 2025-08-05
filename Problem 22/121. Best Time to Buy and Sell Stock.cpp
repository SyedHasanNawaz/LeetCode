
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int maxVal = *max_element(prices.begin(), prices.end());
        int minVal = *min_element(prices.begin(), prices.end());
        int a = -1, b = -1;

        for (int i = 0; i < n; ++i)
        {
            if (prices[i] == maxVal && a == -1)
                a = i;
            if (prices[i] == minVal && b == -1)
                b = i;
        }

        if (a > b)
        {
            return maxVal - minVal;
        }

        int profit = 0;
        int minSoFar = prices[0];
        for (int i = 1; i < n; ++i)
        {
            profit = max(profit, prices[i] - minSoFar);
            minSoFar = min(minSoFar, prices[i]);
        }

        return profit;
    }
};
