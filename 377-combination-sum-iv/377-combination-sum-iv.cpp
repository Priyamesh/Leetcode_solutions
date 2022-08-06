class Solution {
public:
    
    // unordered_map<int,int>memo;
    int memo[1001][201];
    
    int helper(vector<int>& nums, int target,int sum,int index)
    {
        if(index>=nums.size() || sum>target)
            return 0;
        
        if(sum==target)
            return 1;
         
        // if(memo.find(sum)!=memo.end())
        //     return memo[sum];
        if(memo[sum][index]!=-1)
            return memo[sum][index];
        
        //consider
        int consider=helper(nums,target,sum+nums[index],0);
        
        //not consider
        int not_consider=helper(nums,target,sum,index+1);
        
        // return memo[sum]=(consider+not_consider);
        return memo[sum][index]=(consider+not_consider);
    }
    
    
    int combinationSum4(vector<int>& nums, int target) {
        memset(memo,-1,sizeof(memo));
        return helper(nums,target,0,0);
        
        
    }
};