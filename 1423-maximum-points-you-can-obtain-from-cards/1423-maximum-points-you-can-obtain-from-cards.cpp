class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
     
        int n=cardPoints.size();
        int sum=accumulate(cardPoints.begin(),cardPoints.end(),0);
        int max_sum=INT_MIN;
        int window_sum=0;
        
        for(int i=0;i<n-k;i++)
        {
            window_sum+=cardPoints[i];
        }
        
        max_sum=max(max_sum,sum-window_sum);
        
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