/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int DFS(TreeNode* node, int& res)
    {
        if(!node) return 0;
        int leftSum = max(DFS(node->left,res),0);
        int rightSum= max(DFS(node->right, res), 0);
        res = max(leftSum + rightSum +node->val, res);
        return max(leftSum, rightSum) +node->val;
    }

    int maxPathSum(TreeNode* root) {
        int res= root->val;
        DFS(root, res);
        return res;
        
    }
};
