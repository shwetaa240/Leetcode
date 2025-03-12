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
    typedef unsigned long ll;
    int widthOfBinaryTree(TreeNode* root) {
       queue<pair<TreeNode*,ll>> q; 
       ll ans=0; int s,i;
       q.push({root,0});
       while(!q.empty())
       {
         int s=q.size();
         ll l=q.front().second;
         ll r=q.back().second;
         ans=max(ans,r-l+1);
         while(s--)
         {
            TreeNode* node=q.front().first;
            ll curr=q.front().second;
            q.pop();
            if(node->left)
            q.push({node->left,curr*2+1});
            if(node->right)
            q.push({node->right,curr*2+2});

         }
       }
       return ans;
    }
};