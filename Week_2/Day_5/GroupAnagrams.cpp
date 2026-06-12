#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> anagramMap;
        
        for (string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end()); 
            anagramMap[temp].push_back(s);  
        }
        
        
        vector<vector<string>> result;
        for (auto pair : anagramMap) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};