#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> next_greater;
        
        
        for (int i = nums2.size() - 1; i >= 0; i--) {
            int num = nums2[i];
            
            
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }
            
            
            if (!st.empty()) {
                next_greater[num] = st.top();
            } else {
                next_greater[num] = -1; 
            }
            
            st.push(num); 
        }
        
        
        vector<int> result;
        for (int num : nums1) {
            result.push_back(next_greater[num]);
        }
        
        return result;
    }
};