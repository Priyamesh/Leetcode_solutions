class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                int k=i;
                int count=0;
                for(int j=0;j<needle.size();j++)
                {
                    if( (haystack[k++]==needle[j]) && k<=haystack.size() )
                        count++;
                    else
                        break;
                }
                if(count==needle.size())
                    return i;
            }
        }
        return -1;
    }
};