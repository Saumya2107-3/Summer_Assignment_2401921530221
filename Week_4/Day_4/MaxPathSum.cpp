#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    int findMaxPath(TreeNode* root, int& maxSum) {
        if (root == NULL) return 0;
        
        
        int leftGain = max(0, findMaxPath(root->left, maxSum));
        int rightGain = max(0, findMaxPath(root->right, maxSum));
        
       
        int currentPathSum = root->val + leftGain + rightGain;
        
        
        maxSum = max(maxSum, currentPathSum);
        
        
        return root->val + max(leftGain, rightGain);
    }

public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN; 
        findMaxPath(root, maxSum);
        return maxSum;
    }
};