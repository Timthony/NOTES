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
\\/**
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
    bool isSymmetric(TreeNode* root) {
        //非递归方式实现
        if(root == nullptr)  return true;
        
        TreeNode* p1 = root;
        TreeNode* p2 = root;
        
        queue<TreeNode*> left, right;
        left.push(p1->left);
        right.push(p2->right);
        while(!left.empty() && !right.empty())
        {
            p1 = left.front();
            left.pop();
            p2 = right.front();
            right.pop();
            //如果P1和p2同时为空或者同时不为空才执行
            if(p1==nullptr&&p2==nullptr)  continue;
            else if(!p1 || !p2)  return false;
            else if(p1->val != p2->val)  return false;

            left.push(p1->left);
            left.push(p1->right);
            right.push(p2->right);
            right.push(p2->left);
        }
        
        return true;  
        
    }
};
