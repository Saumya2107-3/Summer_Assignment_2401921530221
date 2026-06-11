#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> resultStack;
        string currentString = "";
        int k = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                
                k = k * 10 + (c - '0');
            } else if (c == '[') {
                
                counts.push(k);
                resultStack.push(currentString);
                
                currentString = "";
                k = 0;
            } else if (c == ']') {
                
                string decodedString = resultStack.top();
                resultStack.pop();
                int count = counts.top();
                counts.pop();
                
                
                for (int i = 0; i < count; i++) {
                    decodedString += currentString;
                }
                currentString = decodedString;
            } else {
                
                currentString += c;
            }
        }
        
        return currentString;
    }
};