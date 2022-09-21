class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<int>res;
        int sum=0;
        for(auto num:nums)
        {
            if(num%2==0)
                sum+=num;
        }
        
        for(auto val:queries)
        {
            
            int temp=nums[val[1]];
            nums[val[1]]+=val[0];
            if(temp%2==0 && nums[val[1]]%2==0)
            {
                sum-=temp;
                sum+=nums[val[1]];
            }
            else if(temp%2==0 && nums[val[1]]%2!=0)
            {
                sum-=temp;
            }
            else if( temp%2!=0 && nums[val[1]]%2==0)
            {
                sum+=nums[val[1]];
            }
            res.push_back(sum);
        }
        return res;
    }
};