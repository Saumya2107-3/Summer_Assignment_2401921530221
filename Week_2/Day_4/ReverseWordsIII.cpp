#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;
        
        while (i < n) {
            
            if (s[i] == ' ') {
                i++;
                continue;
            }
            
            
            int start = i;
            
            while (i < n && s[i] != ' ') {
                i++;
            }
            int end = i - 1;
            
            
            reverse(s.begin() + start, s.begin() + end + 1);
        }
        
        return s;
    }
};