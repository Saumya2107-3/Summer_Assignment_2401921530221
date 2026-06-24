#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
   
    bool validate(TreeNode* root, long long minVal, long long maxVal) {
        if (root == NULL) return true;
        
       
        if (root->val <= minVal || root->val >= maxVal) return false;
        
        
        return validate(root->left, minVal, root->val) && 
               validate(root->right, root->val, maxVal);
    }

public:
    bool isValidBST(TreeNode* root) {
        return validate(root, -2147483648LL - 1, 2147483647LL + 1); 
    }
};