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
    /* Idea:
        since inorder of BST gives us sorted array 
        we can find Inorder and then return Kth Element
        
        just to make it more efficient 
        we can skip the inorder once we have taken k elements
    */
    
    vector<int>inorder;
    
    void inorderTraversal(TreeNode* root,int k)
    {
        if(root==0)
            return;
        
        inorderTraversal(root->left,k);
        inorder.push_back(root->val);
        if(inorder.size()>k)
            return;
        inorderTraversal(root->right,k);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        inorderTraversal(root,k);
        return inorder[k-1];
    }
};