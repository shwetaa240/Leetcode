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
    bool isUnivalTree(TreeNode* root) {
        if(!root) return true;
        return check(root,root->val);
    }
    bool check(TreeNode* root,int x){
     if(!root) return true;
     if(root->val!=x)
     {
      return false;
     }
     bool l=check(root->left,x);
     bool r=check(root->right,x);
     return (l&&r);
    }
};