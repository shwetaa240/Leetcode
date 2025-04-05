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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mpp;
        int i,n=inorder.size(),m=preorder.size();
        for(i=0;i<n;i++)
        {
            mpp[inorder[i]]=i;
        }
        TreeNode *root=build(inorder,0,n-1,preorder,0,m-1,mpp);
        return root;
    }
    TreeNode* build(vector<int>&in,int is,int ie,vector<int>&pre,int ps,int pe,unordered_map<int,int> &mpp)
    {
       if(is>ie || ps>pe)
       return NULL;
       TreeNode* root=new TreeNode(pre[ps]);
       int inroot=mpp[pre[ps]],j=inroot-is;
       root->left=build(in,is,inroot-1,pre,ps+1,ps+j,mpp);
       root->right=build(in,inroot+1,ie,pre,ps+j+1,pe,mpp);
         return root;
    }
};