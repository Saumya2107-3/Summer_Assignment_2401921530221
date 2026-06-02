#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        
        // 1. Pehle k elements ka sum nikal lo (Pehli Window)
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        double maxSum = sum;
        
        // 2. Sliding Window: Ek-ek kadam aage badho
        for (int i = k; i < nums.size(); i++) {
            // Naya element jodenge, aur purana peeche wala element ghata denge
            sum += nums[i] - nums[i - k]; 
            maxSum = max(maxSum, sum);
        }
        
        // 3. Sabse bade sum ko k se divide karke Average return karo
        return maxSum / k;
    }
};