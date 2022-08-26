class Solution {
public:
    
    bool cmp(vector<int>mp,vector<int>memo)
    {
        for(int i=0;i<10;i++)
        {
            if(mp[i]!=memo[i])
                return false;
        }
        return true;
    }
    
    bool reorderedPowerOf2(int n) {
        vector<int>memo(10,0);
        
        while(n>0)
        {
            int r=n%10;
            memo[r]++;
            n=n/10;
        }
        
        // for(int i=0;i<10;i++)
        //     cout<<memo[i]<<" ";
        
        // cout<<"\n";
        for(int i=0;i<30;i++)
        {
            long long num=pow(2,i);
            // cout<<num<<"\n";
            vector<int>mp(10,0);
            
            while(num>0)
            {
                int r=num%10;
                mp[r]++;
                num=num/10;
            }
            
            // for(int i=0;i<10;i++)
            //     cout<<mp[i]<<" ";
            // cout<<"\n";
            
            if(cmp(mp,memo))
                return true;
        }
        return false;
    }
};