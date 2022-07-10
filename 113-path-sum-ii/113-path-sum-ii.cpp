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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> res;
        
        if(root==0)
            return res;
        
        stack<pair<TreeNode*,pair<int,vector<int>>>>st;
        st.push({root,{0,{}}});
        
        while(!st.empty())
        {
            auto p=st.top();st.pop();
            TreeNode* curr=p.first;
            int sum=p.second.first+curr->val;
            p.second.second.push_back(curr->val);
            
            if(curr->left==0 && curr->right==0 && sum==targetSum)
                res.push_back(p.second.second);
            
            if(curr->left)
                st.push({curr->left,{sum,p.second.second}});
            if(curr->right)
                st.push({curr->right,{sum,p.second.second}});
        }
        return res;
    }
};