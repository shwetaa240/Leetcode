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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mpp;
        inorder(root,mpp);
        return max_freq(mpp);
    }
    void inorder(TreeNode* root, unordered_map<int,int> &mpp)
    {
        if(!root)
        return;
        if(root->left)
        inorder(root->left,mpp);
        mpp[root->val]++;
        if(root->right)
        inorder(root->right,mpp);
    }
    vector<int> max_freq(unordered_map<int,int> &mpp)
    {
        vector<int> ans;
        int i,maxi=0;
        for(auto i:mpp)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
            }
        }
        for(auto i:mpp)
        {
            if(i.second==maxi)
            ans.push_back(i.first);
        }
        return ans;
    }
};