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
class BSTIterator {
    
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
       pushall(root); 
    }
    
    int next() {
       TreeNode* t=st.top();
       int val=t->val;
       st.pop();
       t=t->right;
        pushall(t);  
       return val;
    }
    
    bool hasNext() {
        return !st.empty();
    }

  private:
  void pushall(TreeNode *root)
  {
    TreeNode* t1=root;
    for(;t1!=NULL;t1=t1->left)
    {if(t1)
    st.push(t1);
    }
  }
};
 
/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */