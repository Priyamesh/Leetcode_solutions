class Solution {
public:
    
    int first_ocr(vector<int>& nums, int target)
    {
        int n=nums.size()-1;
        int low=0;
        int high=n;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            cout<<mid<<" ";
            if(target==nums[mid])
            {
                while(mid>0 && nums[mid-1]==nums[mid])
                {
                    mid--;
                }
                return mid;
            }
                
            else if(target<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
    
    int last_ocr(vector<int>& nums, int target)
    {
        int n=nums.size()-1;
        int low=0;
        int high=n;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(target==nums[mid])
            {
                while(mid<n && nums[mid+1]==nums[mid])
                {
                    mid++;
                }
                return mid;
            }
                
            else if(target<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int start=first_ocr(nums,target);;
        int end=last_ocr(nums,target);
        return {start,end};
    }
};