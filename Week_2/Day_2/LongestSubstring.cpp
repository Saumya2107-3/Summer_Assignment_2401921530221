#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count(128, 0); 
        int left = 0, right = 0;
        int maxLength = 0;
        
        while (right < s.length()) {
            char r_char = s[right];
            count[r_char]++;
            
            
            while (count[r_char] > 1) {
                char l_char = s[left];
                count[l_char]--;
                left++;
            }
            
            
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        
        return maxLength;
    }
};