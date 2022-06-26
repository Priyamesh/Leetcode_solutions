class Solution {
public:
    /*Idea :
    we have to pull out k card from start or end 
    (so it will always make a sliding window in between)
    
    so instead,what we are goin to do is
    we are finding a window size of n-k having minimum sun
    so that when we susbtact it from total sum we get k cards with max sum 
    */
    
    
    int maxScore(vector<int>& cardPoints, int k) {
     
        int n=cardPoints.size();
        int sum=accumulate(cardPoints.begin(),cardPoints.end(),0);
        int max_sum=INT_MIN;
        int window_sum=0;
        
        //making a sliding window
        for(int i=0;i<n-k;i++)
        {
            window_sum+=cardPoints[i];
        }
        
        max_sum=max(max_sum,sum-window_sum);
        
        //moving the sliding window
        int left=0;
        int right=n-k;
        while(right<n)
        {
            window_sum=window_sum-cardPoints[left++]+cardPoints[right++];
            max_sum=max(max_sum,sum-window_sum);
        }
       
        return max_sum;
    }
};