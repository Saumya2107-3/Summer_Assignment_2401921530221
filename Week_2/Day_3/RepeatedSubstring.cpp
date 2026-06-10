#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        string doubled = s + s;
        
        
        string intermediate = doubled.substr(1, doubled.length() - 2);
        
        
        if (intermediate.find(s) != string::npos) {
            return true;
        }
        
        return false;
    }
};