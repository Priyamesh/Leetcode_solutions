class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>out;
        
        sort(intervals.begin(),intervals.end());
        
        int prev_start=intervals[0][0];
        int prev_end=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++)
        {
            int curr_start=intervals[i][0];
            int curr_end=intervals[i][1];
            
            if(prev_end>=curr_start)
            {
                prev_end=max(prev_end,curr_end);
            }
            else
            {
                out.push_back({prev_start,prev_end});
                prev_start=curr_start;
                prev_end=curr_end;
            }
        }
        out.push_back({prev_start,prev_end});
        return out;
    }
};