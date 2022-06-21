class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
     
        priority_queue <int, vector<int>, greater<int>>pq;
        
        int i=0;
        for(;i<heights.size()-1;i++)
        {
            int diff=heights[i+1]-heights[i];
            
            if(diff<=0)
                continue;
            
            pq.push(diff);
            
            if(pq.size()>ladders)
            {
                if(bricks>=pq.top()){
                    bricks-=pq.top();
                    pq.pop();
                }
                else
                    break;
                
            }
        }
        return i;
    }
};