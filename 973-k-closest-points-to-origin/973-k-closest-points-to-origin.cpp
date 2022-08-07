class Solution {
public:
    
    /*Idea: 
    we are calulation the distance from origin to the given point and storing in priority queue
    but we are using a trick that
    we are just calcultaing the pow part and not the sqrt 
    bcoz the grater the pow part the greter the sqrt part and
    for comparion it doesn't matter
    and we are storing it in array
    arr[0] will store the dis and next two will store x and y
    */
    
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