class Solution {
public:
    
    vector<string>res;
    void helper(string s,int index,string str)
    {
        if(str.size()==s.size()){
            res.push_back(str);
        }
        
        
        //if integer
        if(isdigit(s[index]))
        {
            str.push_back(s[index]);
            helper(s,index+1,str);
        }
        
        //if character
        if(isalpha(s[index]))
        {
            //lowercase
            str.push_back(tolower(s[index]));
            helper(s,index+1,str);
            str.pop_back();
            
            //uppercase
            str.push_back(toupper(s[index]));
            helper(s,index+1,str);
        }
    }
    
    
    vector<string> letterCasePermutation(string s) {
        string str="";
        helper(s,0,str);
        return res;
    }
};