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
     int res=0;
public:
 
    int diameterOfBinaryTree(TreeNode* root) {
      if(!root) return 0;
     check(root); 
      return res; 
    }
    int check(TreeNode* root)
    {
      if(!root) return 0;
      int l=check(root->left);
      int r=check(root->right);
     res=max(res,l+r); 
      return 1+max(l,r);
    }
};