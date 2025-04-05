class Solution {
public:
    int minVal(TreeNode* root) {
        int ans = root->val;
        while (root->left) {
            ans = root->left->val;
            root = root->left;
        }
        return ans;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        // Edge case
        if (root == NULL) {

            return NULL;
        }
        // for Non left nodes
        if (root->val > key) {
            root->left = deleteNode(root->left, key);
        } else if (root->val < key) {
            root->right = deleteNode(root->right, key);
        } else {
            if (root->left == NULL) // 1 Child right
                return root->right;//delete Root
            else if (root->right == NULL) // 1 Child left
                return root->left;//delete Root
            else {
                // Both Child 
                root->val = minVal(root->right);
                root->right = deleteNode(root->right, root->val);
            }
            return root;
        }
        return root;
    }
};