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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==0)
            return false;
        
        stack<pair<TreeNode*,int>>st;
        st.push({root,0});
        
        while(!st.empty())
        {
            auto p=st.top();st.pop();
            TreeNode* curr=p.first;
            int sum=p.second+curr->val;
            
            if(curr->left==0 && curr->right==0 && sum==targetSum)
                return true;
            
            if(curr->left)
                st.push({curr->left,sum});
            if(curr->right)
                st.push({curr->right,sum});
        }
        return false;
    }
};