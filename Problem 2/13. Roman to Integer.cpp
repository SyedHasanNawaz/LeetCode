#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int result=0;
        for(int i=0;i<n;++i){

            //4
            if(s[i]=='I' && s[i+1]=='V' ){
                result=result+4;
                ++i;
            }
            //9
            else if(s[i]=='I' && s[i+1]=='X' ){
                result=result+9;
                ++i;
            }
            //40
            else if(s[i]=='X' && s[i+1]=='L' ){
                result=result+40;
                ++i;
            }
            //90
            else if(s[i]=='X' && s[i+1]=='C' ){
                result=result+90;
                ++i;
            }
            //400
            else if(s[i]=='C' && s[i+1]=='D' ){
                result=result+400;
                ++i;
            }
            //900
            else if(s[i]=='C' && s[i+1]=='M' ){
                result=result+900;
                ++i;
            }
            //1000
            else if(s[i]=='M'){
                result=result+1000;
            }
            //500
            else if(s[i]=='D'){
                result=result+500;
            }
            //100
            else if(s[i]=='C'){
                result=result+100;
            }
            //50
            else if(s[i]=='L'){
                result=result+50;
            }
            //10
            else if(s[i]=='X'){
                result=result+10;
            }
            //5
            else if(s[i]=='V'){
                result=result+5;
            }
            //1,2,3,6,7,8
            else if(s[i]=='I'){
                result=result+1;
            }
            
            

        }
        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.romanToInt("III") << endl;       // 3
    cout << sol.romanToInt("IV") << endl;        // 4
    cout << sol.romanToInt("IX") << endl;        // 9
    cout << sol.romanToInt("LVIII") << endl;     // 58
    cout << sol.romanToInt("MCMXCIV") << endl;   // 1994
    return 0;
}