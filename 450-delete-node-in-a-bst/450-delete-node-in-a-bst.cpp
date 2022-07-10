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
    
    TreeNode* leftMostNode(TreeNode *root)
    {
        while(root->left)
        {
            root=root->left;
        }
        return root;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==0)
            return 0;
        
        if(key > root->val)
        {
            root->right=deleteNode(root->right,key);
        }
        else if(key < root->val)
        {
            root->left=deleteNode(root->left,key);
        }
        else
        {
            if(root->left==0 && root->right==0)
            {
                root=0;
                // return root;
            }
            else if(root->left==0)
            {
                root=root->right;
                // return root;
            }
            else if(root->right==0)
            {
                root=root->left;
                // return root;
            }
            else
            {
                TreeNode *temp=leftMostNode(root->right);
                swap(root->val,temp->val);
                
                root->right=deleteNode(root->right,key);
                // return root;
            }
        }
        return root;
    }
};