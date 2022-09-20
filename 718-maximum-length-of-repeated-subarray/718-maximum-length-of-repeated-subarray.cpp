class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int max_len=0;
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    max_len=max(max_len,dp[i][j]);
                }
            }
        }
        
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=1;j<=m;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        return max_len;
        
        
        
    }
};