#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {

        while (b.length() < a.length())
            b = '0' + b;
        while (a.size() < b.size())
        {
            a = '0' + a;
        }
        string result = "";
        int carry = 0;

        for (int i = a.length() - 1; i >= 0; --i)
        {
            int bit1 = a[i] - '0';
            int bit2 = b[i] - '0';
            int sum = bit1 + bit2 + carry;

            if (sum == 0)
            {
                result = '0' + result;
                carry = 0;
            }
            else if (sum == 1)
            {
                result = '1' + result;
                carry = 0;
            }
            else if (sum == 2)
            {
                result = '0' + result;
                carry = 1;
            }
            else if (sum == 3)
            {
                result = '1' + result;
                carry = 1;
            }
        }
        if (carry == 1)
            result = '1' + result;

        return result;
    }
};

int main()
{
    Solution sol;
    string a = "11";
    string b = "1";
    string result = sol.addBinary(a, b);
    cout << result << endl;
    return 0;
}