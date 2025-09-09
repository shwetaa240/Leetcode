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
    TreeNode* convertBST(TreeNode* root) {
        int tot=0;
        solve(root,tot);
        return root;
    }
    void solve(TreeNode* root,int &tot)
    {
        if(!root)
        return;
        
        solve(root->right,tot);
        tot+=root->val;
        root->val=tot;
        
        solve(root->left,tot);
    }
};