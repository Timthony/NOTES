/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool rec(TreeNode* left, TreeNode* right)
    {
        if(left == nullptr && right == nullptr)
        {
            return true;
        }
        if(left == nullptr || right == nullptr)
        {
            return false;
        }
        if(left->val != right->val)
        {
            return false;
        }
        return (rec(left->left, right->right) && rec(left->right, right->left));
          
    }
    
    
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        
        return rec(root->left, root->right);
        
        
    }
};
