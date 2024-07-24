#include <string>
#include <stack>
using namespace std;

class ValidParentheses /* https://leetcode.com/problems/valid-parentheses/submissions/1332233437/ */
{
public:
    bool isValid(string text) { //40=( || 41=) || 91=[ || 93=] || 123={ || 125=}
        stack<char> SpecChar;

        int skobcrug = 0;
        int skobkvadra = 0;
        int skobpolu = 0;
        stack<int> posled;

        for (char i : text) if ((int)i == 40 || (int)i == 41 || (int)i == 91 || (int)i == 93 || (int)i == 123 || (int)i == 125) SpecChar.push(i);
        if (SpecChar.size() % 2) return false;

        while (!SpecChar.empty())
        {
            if ((int)SpecChar.top()==41)
            {
                skobcrug++;
                posled.push(41);
            }
            if ((int)SpecChar.top() == 93)
            {
                skobkvadra++;
                posled.push(93);
            }
            if ((int)SpecChar.top() == 125)
            {
                skobpolu++;
                posled.push(125);
            }
            if ((int)SpecChar.top() == 40)
            {
                if (posled.empty()) return false;

                if ((int)posled.top() != 41)return false;
                posled.pop();
                skobcrug--;
            }
            if ((int)SpecChar.top() == 91)
            {
                if (posled.empty()) return false;

                if ((int)posled.top() != 93)return false;
                posled.pop();
                skobkvadra--;



            }
            if ((int)SpecChar.top() == 123)
            {
                if (posled.empty()) return false;

                if ((int)posled.top() != 125)return false;
                posled.pop();
                skobpolu--;



            }
            SpecChar.pop();
        }
        if (skobcrug != 0 || skobkvadra != 0|| skobpolu != 0) return false;
        return true;
    }
};

