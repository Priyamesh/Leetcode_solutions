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
    
    
    vector<int>memo;
    
    void inorder(TreeNode* root)
    {
        if(root)
        {
            inorder(root->left);
            memo.push_back(root->val);
            inorder(root->right);
        }
    }
    
    bool isValidBST(TreeNode* root) {
        
        inorder(root);
        
        for(int i=1;i<memo.size();i++)
        {
            if(memo[i]<=memo[i-1])
                return false;
        }
        return true;
    }
};