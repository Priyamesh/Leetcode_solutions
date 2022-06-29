class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     
        unordered_map<int,int>memo;
        
        memo[0]=1;
        int sum=0;
        int count=0;
        
        for(auto val:nums){
            sum+=val;
            
            if(memo.find(sum-k)!=memo.end())
                count+=memo[sum-k];
            
            memo[sum]++;
        }
        return count;
        
    }
};