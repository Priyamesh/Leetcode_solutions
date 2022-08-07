class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<vector<int>>res;
        priority_queue<vector<int>>pq;
        
        
        for(auto p:points)
        {
            int x_axis=pow((p[0]-0),2);
            int y_axis=pow((p[1]-0),2);
            
            int dis=(x_axis+y_axis);
            
            pq.push({dis,p[0],p[1]});
            
            if(pq.size()>k)
                pq.pop();
        }
        while(!pq.empty())
        {
            auto vec=pq.top();pq.pop();
            res.push_back({vec[1],vec[2]});
        }
        return res;
    }
};