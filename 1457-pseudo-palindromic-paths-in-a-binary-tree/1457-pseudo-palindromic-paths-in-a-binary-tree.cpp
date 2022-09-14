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
    
    bool checkForPlaindrome(vector<int>&memo)
    {
        int odd_count=0;
        for(auto val:memo)
        {
            if(val %2 !=0 )
                odd_count++;
        }
        if(odd_count > 1)
            return false;
        else
            return true;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        int res=0;
        if(root==0)
            return res;
        
        vector<int>memo(10,0);
        stack<pair<TreeNode*,vector<int>>>st;
        st.push({root,memo});
        
        while(!st.empty())
        {
            auto p=st.top();st.pop();
            TreeNode *curr=p.first;
            
            // vector<int>memo=p.second;
            p.second[curr->val]++;
            
            if(curr->left)
                st.push({curr->left,p.second});
            if(curr->right)
                st.push({curr->right,p.second});
            
            // check for leaf node
            if(curr->left==0 && curr->right==0)
                res+=checkForPlaindrome(p.second);
                
        }
        return res;
    }
};