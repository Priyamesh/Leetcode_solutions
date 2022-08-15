class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>memo;
        
        memo['I']=1;
        memo['V']=5;
        memo['X']=10;
        memo['L']=50;
        memo['C']=100;
        memo['D']=500;
        memo['M']=1000;      
        
        int res=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if( (s[i]=='V' || s[i]=='X') && i>0)
            {
                res+=memo[s[i]];
                if(s[i-1]=='I')
                {
                    res-=memo['I'];
                    i--;
                }
            }
            
            else if( (s[i]=='L' || s[i]=='C') && i>0)
            {
                res+=memo[s[i]];
                if(s[i-1]=='X')
                {
                    res-=memo['X'];
                    i--;                    
                }
            }
            else if( (s[i]=='D' || s[i]=='M') && i>0)
            {
                res+=memo[s[i]];
                if(s[i-1]=='C')
                {
                    res-=memo['C'];
                    i--;
                }
            }
            else
            {
                res+=memo[s[i]];
            }
        }
        return res;
    }
};