class Solution {
public:
    //substr(pos,len)
    //if we want the substring till last we just give postion
    int numOfPairs(vector<string>& nums, string target) {
        int n=target.size();
        int count=0;
        unordered_map<string,int>memo;
        
        for(auto word:nums)
        {
            memo[word]++;
        }
        
        for(int i=0;i<target.size();i++)
        {
            string prefix=target.substr(0,i+1);
            string suffix=target.substr(i+1,n-i);
            // string suffix=target.substr(i+1,n-i);
            
            // cout<<"prefix - "<<prefix<<"  suffix - "<<suffix<<"\n";
            
            if(prefix==suffix)
                count += memo[prefix]*(memo[suffix]-1);
            else
                count += memo[prefix]*memo[suffix];
        }
        return count;
    }
};