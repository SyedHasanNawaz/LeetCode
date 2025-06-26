#include <iostream>
#include <stack>
#include <string>

using namespace std;

        bool isValid(string s) {
            if (s.empty()) {
                return true;
            }
            stack<char> st;
            for (char c : s) {
                if (c == '(' || c == '{' || c == '[') {
                    st.push(c);
                } else {
                    if (st.empty()) {
                        return false;
                    }
                    char top = st.top();
                    st.pop();
                    if ((c == ')' && top != '(') ||
                        (c == '}' && top != '{') ||
                        (c == ']' && top != '[')) {
                        return false;
                    }
                }
            }
            return st.empty();
        }
        
    
    int main() {
        string s;
        cout << "Enter a string of parentheses: ";
        cin >> s;
        if (isValid(s)) {
            cout << "The string is valid." << endl;
        } else {
            cout << "The string is not valid." << endl;
        }
        return 0;
    }
