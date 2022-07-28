class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int>hsh(26,0);
        
        if(s.size()!=t.size())
            return false;
        
        for(int i=0;i<s.size();i++)
        {
            hsh[s[i]-'a']++;
            hsh[t[i]-'a']--;
        }
        for(auto val:hsh)
        {
            if(val!=0)
                return false;
        }
        return true;
    }
};