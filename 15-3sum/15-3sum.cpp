class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>out;
        
        if(nums.size()<3)
            return out;
        
        for(int i=0;i<nums.size()-2;i++){
            
            
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int left=i+1;
                int right=nums.size()-1;
                int target=-nums[i];

                while(left<right)
                {
                    int sum=nums[left]+nums[right];

                    if(sum==target)
                    {
                        out.push_back({nums[i],nums[left],nums[right]});
                        // cout<<"found";
                        while(left<right && nums[left]==nums[left+1])
                            left++;
                        while(left<right && nums[right]==nums[right-1])
                            right--;

                        left++;
                        right--;
                    }
                    if(sum<target)
                    {
                        // while(nums[left]==nums[left+1] && left<right)
                            left++;
                    }
                    if(sum>target)
                    {
                        // while(nums[right]==nums[right-1] && left<right)
                            right--;
                    }
                }
            }
            
        }
        return out;
        
        
    }
};