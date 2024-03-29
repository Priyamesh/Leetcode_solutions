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
    
    TreeNode* BST(int low,int high,vector<int>& nums)
    {
        if(low>high)
            return 0;
        
        int mid=low+(high-low)/2;
        // cout<<mid<<"\n";
        
        TreeNode* root=new TreeNode(nums[mid]);
        
        root->left=BST(low,mid-1,nums);
        root->right=BST(mid+1,high,nums);
        
        return root;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        
        return BST(low,high,nums);
        
    }
};