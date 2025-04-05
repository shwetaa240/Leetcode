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
    TreeNode* bstFromPreorder(vector<int>& pre) {
        int i=0;
        return solve(pre,i,INT_MAX);
    }
    TreeNode* solve(vector<int>&A,int &i,int max_i)
    {
        if( i==A.size()|| A[i]>max_i )
        return NULL;
        TreeNode* root=new TreeNode(A[i]);
        i++;
        root->left=solve(A,i,root->val);
        root->right=solve(A,i,max_i);
        return root;
    }
};