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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> res;
        if(root == nullptr)
        {
            return res;
        }
        TreeNode *pNode = root;
        while(!s.empty() || pNode)
        {
            if(pNode)
            {
                s.push(pNode);
                pNode = pNode->left;//遍历左子树，直到为空
            }
            else
            {
                TreeNode *tempnode = s.top();
                res.push_back(tempnode->val);
                s.pop();
                pNode = tempnode->right;//遍历右子树
            }
        }
        
        return res;
            
            
            
            
    }
};
