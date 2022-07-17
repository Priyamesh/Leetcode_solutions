class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int>res;
        
        unordered_map<int,int>mp;
        for(auto val:nums)
            mp[val]++;
        
        priority_queue<pair<int,int>>pq;
        
        for(auto p:mp)
        {
            pq.push({p.second,p.first});
        }
        
        for(int i=1;i<=k;i++)
        {
            auto val=pq.top();pq.pop();
            res.push_back(val.second);
        }
        return res;
    }
};