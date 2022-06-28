class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
     
        
        int count=0;
        
        sort(intervals.begin(),intervals.end(),comp);
                
        int prev_start=intervals[0][0];
        int prev_end=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++)
        {
            int curr_start=intervals[i][0];
            int curr_end=intervals[i][1];
            
            if(prev_end>curr_start)
                count++;
            else
            {
                prev_start=curr_start;
                prev_end=curr_end;
            }
            // cout<<prev_start<<" "<<prev_end<<"\n";
        }
        return count;
    }
};