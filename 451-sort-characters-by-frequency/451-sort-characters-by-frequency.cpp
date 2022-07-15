class Solution {
public:
    string frequencySort(string s) {
        
        vector<pair<int,char>>hsh(256,{0,0});
        
        for(auto val:s)
        {
            hsh[val]={hsh[val].first+1,val};
        }
        sort(hsh.begin(),hsh.end());
        
        string out="";
        for(auto val:hsh)
        {
            //out=string(val.first,val.second)+out;
            string temp="";
            while(val.first>0)
            {
                temp+=val.second;
                val.first--;
            }
            out=temp+out;
        }
        return out;
        
    }
};