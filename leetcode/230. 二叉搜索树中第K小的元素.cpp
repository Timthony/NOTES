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
    int kthSmallest(TreeNode* root, int k) {
        //二叉搜索树进行中序遍历的结果就是从小到大排序的结果
        //然后中序遍历时第k个遍历到的数字，就是第k小的数字
        int num = 0;
        int res = 0;
        fun(root, k, num, res);
        return res;
    }
    
    void fun(TreeNode* root, int k, int &num, int &res)
    {
        if(!root)  return;
        fun(root->left, k, num, res);
        ++num;
        if(num == k)
        {
            res = root->val;
        }
        fun(root->right, k, num, res);
    }
    
};

    int kthSmallest(TreeNode* root, int k) {
        int left_node = calculate(root->left);
        if(left_node == k-1) return root->val;
        if(left_node >k-1) return kthSmallest(root->left, k);
        if(left_node <k-1) return kthSmallest(root->right,k-left_node-1);
    }
    
    
    int calculate(TreeNode* root)
    {
        if(!root) return 0;
        int node_sum=0;
        node_sum = 1 + calculate(root->left) + calculate(root->right);
        return node_sum;
    }
    
    
    参考：
    https://blog.csdn.net/yuanliang861/article/details/84640069
