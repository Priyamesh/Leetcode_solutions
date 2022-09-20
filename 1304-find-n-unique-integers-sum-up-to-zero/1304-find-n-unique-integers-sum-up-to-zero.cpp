class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int>res;
        
        if(n%2 !=0)
        {
            res.push_back(0);
            n--;
        }
        
        while(n>0)
        {
            res.push_back(n);
            res.push_back(n*-1);
            n=n-2;
        }
        return res;
    }
};