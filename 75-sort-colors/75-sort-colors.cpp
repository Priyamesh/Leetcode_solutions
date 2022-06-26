class Solution {
public:
    void sortColors(vector<int>& nums) {
        int curr=0;
        int left=0;
        int right=nums.size()-1;
        
        while(curr<=right)
        {
            if(nums[curr]==0)
            {
                swap(nums[left],nums[curr]);
                left++;
            }
            if(nums[curr]==2)
            {
                swap(nums[curr],nums[right]);
                right--;
            }
            else
                curr++;
        }
        
        
    }
};