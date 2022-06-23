class Solution {
public:
    
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        
        if(courses.size()<=0)
            return 0;
        
        sort(courses.begin(),courses.end(),comp);
        
        int curr_time=0;
        priority_queue<int>pq;
        
        for(auto course:courses){
            
            curr_time+=course[0];
            pq.push(course[0]);
            
            if(curr_time>course[1]){
                curr_time-=pq.top();
                pq.pop();
            }
        }
        
        return pq.size();
    }
};