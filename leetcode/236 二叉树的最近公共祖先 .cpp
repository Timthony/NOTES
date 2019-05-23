可以考虑直接用两个数组分别记录u和v的路径，然后遍历两个路径找公共祖先。将寻找最近公共祖先转换为两个数组找公共节点。
class Solution {
public:
    
    bool getpath(TreeNode* root, TreeNode *p, vector<TreeNode*> &vec)
    {
        if(root==NULL)   return false;
        if(root == p)
        {
            vec.push_back(root);
            return true;
        }
        
        if(getpath(root->left, p, vec) || getpath(root->right, p, vec))
        {
            vec.push_back(root);
            return true;
        }
        return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        vector<TreeNode*> vp,vq;
        getpath(root, p, vp);
        getpath(root, q, vq);
        int n = vp.size();
        int m = vq.size();
        while(n>0&&m>0&&vp[n-1]==vq[m-1])
        {
            n--;
            m--;
        }
        return vp[n];
    }
};

递归解法：从根节点递归的后续遍历整棵树，定义两个结点left和right来存放p和q在左右子树的位置。
如果p，q在root的左右子树，那么root就是LCA，如果p结点在q节点的子树，那么q就是LCA
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL) {
            return NULL;
        }
        if(root == p || root == q) {
            return root;
        }
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if(left != NULL && right != NULL) {
            return root;
        } else if(left != NULL) {
            return left;
        } else {
            return right;
        }
        
    }
};
