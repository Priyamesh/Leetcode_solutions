class Solution {
public:
    
    /* create a min heap and store values
    if the of size of queue becomes greater than k, then remove top element
    at last return return top
    */
    
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto val:nums)
        {
            pq.push(val);
            
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
    }
};