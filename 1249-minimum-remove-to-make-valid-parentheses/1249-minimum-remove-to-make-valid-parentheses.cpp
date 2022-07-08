class Solution {
public:
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