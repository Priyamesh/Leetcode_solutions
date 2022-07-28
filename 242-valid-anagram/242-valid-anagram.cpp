class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int>hsh(26,0);
        
        for(auto val:s)
        {
            hsh[val-'a']++;
        }
        for(auto val:t)
        {
            hsh[val-'a']--;
        }
        for(auto val:hsh)
        {
            if(val!=0)
                return false;
        }
        return true;
    }
};