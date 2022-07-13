class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int>hsh(n+1,0);
        for(auto val:trust)
        {
            hsh[val[0]]--;
            hsh[val[1]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(hsh[i]==n-1)
                return i;
        }
        return -1;
    }
};