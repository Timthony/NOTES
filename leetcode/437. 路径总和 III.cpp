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
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr)
        {
            return 0;
        }
        //每次递归做三件事：搜索节点T开始的子树的所有路径、递归到左子树重复、递归到右子树重复
        return findpath(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
    
    int findpath(TreeNode* root, int sum)
    {
        //深度优先遍历，搜索某子树的所有可能路径
        int res = 0;
        if(root == nullptr)    return res;
        if(sum == root->val)    
        {
            res++;//此时说明到该节点的路径是符合要求的
        }
        res = res + findpath(root->left, sum-root->val);//目前的路径数目+遍历左子树得到的路径数目
        res = res + findpath(root->right, sum-root->val);
        return res;
    }
    
};
