class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> memo;
        istringstream str(s);
        string word;
        vector<string> words;
        while (str >> word){
            words.push_back(word);
        }
        if (pattern.size()!= words.size()){
            return false;
        }
        for(auto i=0;i<pattern.size();i++){
            if (memo.find(pattern[i])!=memo.end()){
                if (memo[pattern[i]]!=words[i]){
                    return false;
                }
            }
            else{
                memo[pattern[i]]=words[i];
            }
        }
        for (auto word:words){
            int count = 0;
            for (auto p:memo){
                if (p.second==word)
                    count +=1;
            }
            if (count>1)
                return false;
        }
        return true;
    }
};