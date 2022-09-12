class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(),tokens.end());
        
        int n=tokens.size();
        int score=0;
        
        int left=0;
        int right=n-1;
        
        while(left<=right)
        {
            if( tokens[left] > power )
                break;
            // cout<<"left="<<left <<" right="<<right<<" score="<<score<<" power="<<power<<"\n";
            
            if(tokens[left] <= power)
            {
                power-=tokens[left];
                score++;
                left++;
            }
            // cout<<"left="<<left <<" right="<<right<<" score="<<score<<" power="<<power<<"\n";
            if( (left<right) &&  (score>=1) && (power < tokens[left]) )
            {
                power+=tokens[right];
                score--;
                right--;
            }
            // cout<<"left="<<left <<" right="<<right<<" score="<<score<<" power="<<power<<"\n";
        }
        return score;
    }
};