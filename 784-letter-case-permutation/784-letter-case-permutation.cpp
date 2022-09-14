class Solution {
public:
    vector<string>res;
    
    void helper(int index,string str,string s)
    {
        if(index==s.size())
        {
            res.push_back(str);
        }
        
        //if digit
        if(isdigit(s[index]))
        {
            str.push_back(s[index]);
            helper(index+1,str,s);
        }
        
        //if character
        if( isalpha(s[index]))
        {
            //lower
            str.push_back(tolower(s[index]));
            helper(index+1,str,s);
            str.pop_back();
            
            
            //upper
            str.push_back(toupper(s[index]));
            helper(index+1,str,s);
            str.pop_back();
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        string str="";
        helper(0,str,s);
        return res;
    }
};