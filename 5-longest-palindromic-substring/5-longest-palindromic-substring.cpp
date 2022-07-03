class Solution {
public:
    string longestPalindrome(string s) {
        
        int len=s.size();
        int memo[len+1][len+1];
        memset(memo,0,sizeof(memo));
        
        int start=0;int max_len=1;
        
        for(int i=0;i<len;i++)
        {
            memo[i][i]=1;
            
        }

        for(int end=0;end<len;end++)
        {
            for(int beg=end-1;beg>=0;beg--)
            {
                if(s[beg]==s[end])
                {
                    if(end-beg==1 || memo[beg+1][end-1])
                    {
                        memo[beg][end]=1;
                        
                        if(max_len<end-beg+1)
                        {
                            start=beg;
                            max_len=end-beg+1;
                                
                        }
                        
                    }
                }
            }
        }
        return s.substr(start,max_len);
        
    }
};