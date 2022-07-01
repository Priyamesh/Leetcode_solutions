class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int>hsh;
        vector<int>out;
        
        for(int i=0;i<s.size();i++)
        {
            hsh[s[i]]=i;
        }
        
        int prev=0;
        int max_index=hsh[s[0]];
        
        for(int i=0;i<s.size();i++)
        {
            max_index=max(max_index,hsh[s[i]]);
            
            if(i==max_index){
                out.push_back(max_index-prev+1);
                prev=max_index+1;
            }
        }
        return out;
    }
};