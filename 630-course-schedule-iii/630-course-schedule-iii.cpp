class Solution {
public:
    
    /* Idea:
    
    sort the courses according to their deadline, 
    so that we can finish the course which is gonna finish first
    
    add the course time in curr_time and push the course time in queue(priority_queue)
    
    if curr_time exceeds the deadline,it means we have to remove one course
    remove the longest course ,i.e the course on top
    also substract the value from curr_time
    at last the size of queue  is the ans
    
    Time Complexity : O(N*log(N)) , Space Complexity : O(N)
    */
    
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        
        if(courses.size()<=0)
            return 0;
        
        sort(courses.begin(),courses.end(),comp);
        
        for(auto val:courses){
            cout<<val[0]<<" "<<val[1]<<"\n";
        }
        
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