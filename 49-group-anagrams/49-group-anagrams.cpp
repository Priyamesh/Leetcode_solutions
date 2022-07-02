class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>out;
        unordered_map<string,vector<string>>memo;
        
        for(auto &word:strs)
        {
            string sorted_word=word;
            sort(sorted_word.begin(),sorted_word.end());
            memo[sorted_word].push_back(word);
        }
        for(auto p:memo)
        {
            out.push_back(p.second);
        }
        return out;
    }
};