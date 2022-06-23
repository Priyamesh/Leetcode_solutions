class Solution {
public:
    
    bool comp(string &s1,string &s2)
    {
        if(s1.size()+1!=s2.size())
            return false;
        
        int first=0;
        int second=0;
        while(second<s2.size())
        {
            if(s1[first]==s2[second])
            {
                first++;
                second++;
            }
            else
            {
                second++;
            }
        }
        if(first==s1.size() && second==s2.size())
            return true;
        else
            return false;

    }
    
    static bool compare(string &s1,string &s2)
    {
        return s1.size() < s2.size();
    }
    
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(), words.end(),compare);
        
        int n=words.size();
        vector<int>memo(n,1);
        int max_len=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(comp(words[j],words[i]))
                {
                    memo[i]=max(memo[i],1+memo[j]);
                    max_len=max(max_len,memo[i]);
                }
            }
        }
        
        return max_len;
    }
};