/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int msum = INT_MIN, ans, l = 0, sum = 0, s;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            s = q.size();
            sum=0;
            l++;
            while (s--) {
                auto node = q.front();
                q.pop();
                sum += node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            if (sum > msum) {
                msum = sum;
                ans = l;
            }
        }

        return ans;
    }
};