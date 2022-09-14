class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(),tokens.end());
        int score=0;
        int res=0;
        int left=0;
        int right=tokens.size()-1;
        
        while(left<=right)
        {
            if(power >= tokens[left])
            {
                power-=tokens[left++];
                score++;
                res=max(res,score);
            }
            else if(score > 0)
            {
                power+=tokens[right--];
                score--;
            }
            else
                break;
        }
        return res;
    }
};