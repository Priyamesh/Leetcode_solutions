class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> out;
        int num_count[105]={0};
        
        for(int i=0;i<nums.size();i++)
        {
           num_count[nums[i]]++;
        }
        for(int i=1;i<105;i++)
        {
            num_count[i]=num_count[i]+num_count[i-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                out.push_back(0);
            else
                out.push_back(num_count[nums[i]-1]);
        }
        return out;
    }
};