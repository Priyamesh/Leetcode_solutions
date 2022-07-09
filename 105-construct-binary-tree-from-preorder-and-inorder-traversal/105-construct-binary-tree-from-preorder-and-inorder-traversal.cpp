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
    
    TreeNode* build(vector<int>& preorder,unordered_map<int,int>&mp_in,int start,int end,int &preorder_index)
    {
        if(start>end)
            return 0;
        
        TreeNode* temp =new TreeNode(preorder[preorder_index]);
        int root_loc=mp_in[preorder[preorder_index]];
        preorder_index+=1;
        
        temp->left=build(preorder,mp_in,start,root_loc-1,preorder_index);
        temp->right=build(preorder,mp_in,root_loc+1,end,preorder_index);
        
        return temp;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        unordered_map<int,int>mp_in;
        for(int i=0;i<inorder.size();i++)
        {
            mp_in[inorder[i]]=i;
        }
        int preorder_index=0;
        
        return build(preorder,mp_in,0,inorder.size()-1,preorder_index);
    }
};