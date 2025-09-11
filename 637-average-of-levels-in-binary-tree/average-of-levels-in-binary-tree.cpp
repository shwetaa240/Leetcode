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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        int i,s;
        double sum=0;
        q.push(root);
        while(!q.empty())
        {
           s=q.size();
           sum=0;
           for(i=0;i<s;i++){
             TreeNode* temp=q.front();
             q.pop();
             sum+=temp->val;
             if(temp->left) q.push(temp->left);
             if(temp->right) q.push(temp->right);
           }
           res.push_back(sum/s);
        }
        return res;
    }
};