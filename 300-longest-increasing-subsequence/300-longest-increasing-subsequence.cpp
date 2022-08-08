class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        int res=1;
        vector<int>memo(n,1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    memo[i]=max(memo[i],1+memo[j]);
                    res=max(res,memo[i]);
                }
            }
        }
        return res;
    }
};