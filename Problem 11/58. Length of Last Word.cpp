#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size();
        int c = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == ' ' && c == 0)
            {
                continue;
            }
            else if (s[i] != ' ')
            {
                c++;
            }

            else if (s[i] == ' ' && c != 0)
            {
                break;
            }
        }

        return c;
    }
};

int main()
{
    Solution sol;
    string input = "Hello World";
    cout << sol.lengthOfLastWord(input) << endl;
    return 0;
}