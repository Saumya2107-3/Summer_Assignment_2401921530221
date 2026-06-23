#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL) return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool leftToRight = true; 
        
        while (!q.empty()) {
            int size = q.size();
            vector<int> currentLevel(size);
            
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                
                int index = leftToRight ? i : (size - 1 - i);
                currentLevel[index] = node->val;
                
                if (node->left != NULL) q.push(node->left);
                if (node->right != NULL) q.push(node->right);
            }
            
            result.push_back(currentLevel);
            leftToRight = !leftToRight; 
        }
        
        return result;
    }
};