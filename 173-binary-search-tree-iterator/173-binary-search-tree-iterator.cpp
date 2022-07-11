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
    vector<int>inorder;
    int index;
    
    void inorder_traversal(TreeNode* root)
    {
        if(root==0)
            return;
        inorder_traversal(root->left);
        inorder.push_back(root->val);
        inorder_traversal(root->right);
        
    }
    BSTIterator(TreeNode* root) {
        inorder_traversal(root);
        index=0;
        
    }
    
    int next() {
        return inorder[index++];
    }
    
    bool hasNext() {
        if(index<inorder.size())
            return true;
        else
            return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */