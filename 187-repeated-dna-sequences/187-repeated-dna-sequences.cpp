class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        unordered_map<string,int>memo;
        
        string window="";
        int left=0;
        while(left<s.size())
        {
            window=s.substr(left,10);
            memo[window]++;
            left++;
        }
        vector<string>out;
        for(auto p:memo)
        {
            if(p.second>1)
                out.push_back(p.first);
        }
        return out;
    }
};