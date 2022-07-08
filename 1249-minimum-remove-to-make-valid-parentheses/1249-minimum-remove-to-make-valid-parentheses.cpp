class Solution {
public:
    
    /*Idea:
    while moving forward if we encounter '(' then we need to push its index in stack
    if we encounter ')' then we need to check two things
        1.if stack is empty, then its invalid so mark it as'*
        2.if stack top has any opening,pop that since we found its closing
    at last if there is something in stack it means, for those '(' there no ')'
    so mark those index as '*'
    
    at last remove all * from the string and return
    */
    
    string minRemoveToMakeValid(string s) {
        
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(i);
            if(s[i]==')')
            {
                if(st.empty())
                    s[i]='*';
                else
                    st.pop();
            }
        }
        while(!st.empty())
        {
            int index=st.top();st.pop();
            s[index]='*';
        }
        
        // cout<<s;
        string res="";
        for(auto ch:s)
        {
            if(ch!='*')
                res+=ch;
        }
        return res;
    }
};