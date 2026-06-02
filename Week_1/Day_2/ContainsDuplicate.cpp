#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_set duplicate values ko check karne ke liye fast hota hai
        unordered_set<int> seen;
        
        for (int num : nums) {
            // Agar number pehle se set mein hai, toh true return karo
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
            
        }
        return false;
    }
};