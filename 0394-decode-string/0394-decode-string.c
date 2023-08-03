class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string currentStr;
        int num = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + c - '0';
            } else if (isalpha(c)) {
                currentStr += c;
            } else if (c == '[') {
                numStack.push(num);
                strStack.push(currentStr);
                num = 0;
                currentStr = "";
            } else if (c == ']') {
                int repeatTimes = numStack.top();
                numStack.pop();
                string lastStr = strStack.top();
                strStack.pop();
                string repeatedStr;
                for (int i = 0; i < repeatTimes; i++) {
                    repeatedStr += currentStr;
                }
                currentStr = lastStr + repeatedStr;
            }
        }
        return currentStr;
    }
};