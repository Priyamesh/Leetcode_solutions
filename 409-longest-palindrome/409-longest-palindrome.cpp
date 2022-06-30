class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>hsh;
        
        for(auto val:s){
            hsh[val]++;
        }
        
        int count=0;
        int max_odd=0;
        bool flag=false;
        
        for(auto val:hsh)
        {
            cout<<val.first<<" "<<val.second<<"\n";
            if(val.second % 2 ==0)
                count+=val.second;
            else
            {
                count+=(val.second-1);
                flag=true;
            }
            
        }
        
        if(flag)
            return count+1;
        else
            return count;
        
    }
};