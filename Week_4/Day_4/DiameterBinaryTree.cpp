#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    
    int calculateHeight(TreeNode* root, int& maxDiameter) {
        if (root == NULL) return 0;
        
        int leftHeight = calculateHeight(root->left, maxDiameter);
        int rightHeight = calculateHeight(root->right, maxDiameter);
        
        
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);
        
        
        return max(leftHeight, rightHeight) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        calculateHeight(root, maxDiameter);
        return maxDiameter;
    }
};