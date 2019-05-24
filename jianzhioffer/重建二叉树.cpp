/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        //递归的思想，根据前序遍历的结果可以找到根节点
        if(pre.size()==0 || vin.size()==0)
        {
            return nullptr;
        }
        
        TreeNode* head = new TreeNode(pre[0]);
        
        //定义数组保存左右子树的前序，中序结果
        vector<int> left_pre, left_vin, right_pre, right_vin;
        
        int root = 0;
        
        for(int i=0;i<vin.size();i++)
        {
            if(vin[i] == pre[0])
            {
                root=i;
                break;
            }
        }
        
        //递归重建二叉树
        
        for(int i=0;i<root;i++)
        {
            left_vin.push_back(vin[i]);
            left_pre.push_back(pre[1+i]);
        }
        for(int i=root+1;i<vin.size();i++)
        {
            right_vin.push_back(vin[i]);
            right_pre.push_back(pre[i]);
        }
        
        head->left = reConstructBinaryTree(left_pre, left_vin);
        head->right = reConstructBinaryTree(right_pre, right_vin);
        
        return head;

    }
};
