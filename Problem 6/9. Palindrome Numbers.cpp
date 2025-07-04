#include <iostream>
#include "vector"
#include <sstream>
#include <string>

using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) return false; 
            string n = to_string(x);
            int size = n.size();
            for (int i = 0; i < size / 2; ++i) {
                if (n[i] != n[size - 1 - i]) {
                    return false;
                }
            }
            return true;
        }
    };