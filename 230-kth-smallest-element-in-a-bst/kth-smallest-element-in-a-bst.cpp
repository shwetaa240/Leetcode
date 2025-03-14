class Solution {
public:
    int count = 0, result = 0;
    
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return result;
    }

    void inorder(TreeNode* root, int k) {
        if (!root) return;
        
        inorder(root->left, k);  // Visit left subtree
        
        count++;  // Process current node
        if (count == k) {  // Found kth smallest element
            result = root->val;
            return;
        }
        
        inorder(root->right, k);  // Visit right subtree
    }
};
