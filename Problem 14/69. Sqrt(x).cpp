#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int low = 0;
        int high = x;
        int middle;
        int result = 0;

        while (low <= high)
        {
            middle = (low + high) / 2;
            if ((long long)middle * middle == x)
            {
                result = middle;
                return result;
            }
            else if ((long long)middle * middle < x)
            {
                result = middle;
                low = middle + 1;
            }
            else if ((long long)middle * middle > x)
            {
                high = middle - 1;
            }
        }

        return result;
    }
};

int main()
{
}