class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
     
        int n=arr.size()-1;
        int max_till=arr[n];
        vector<int>res(n+1,-1);
        
        for(int i=n-1;i>=0;i--)
        {
            res[i]=max(max_till,arr[i+1]);
            max_till=max(max_till,arr[i]);
        }
        return res;
    }
};