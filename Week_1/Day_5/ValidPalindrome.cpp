#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleanStr = "";
        
        
        for (char c : s) {
            if (isalnum(c)) {
                cleanStr += tolower(c);
            }
        }
        
        
        int left = 0;
        int right = cleanStr.length() - 1;
        
        while (left < right) {
            if (cleanStr[left] != cleanStr[right]) {
                return false; 
            }
            left++;
            right--;
        }
        
        return true;
    }
};