class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>out;
        out.push_back({1});
        out.push_back({1,1});
        for(int i=2;i<=rowIndex;i++)
        {
            vector<int>temp(i+1,1);
            for(int j=1;j<i;j++)
            {
                temp[j]=out[i-1][j-1]+out[i-1][j];
            }
            out.push_back(temp);
        }
        return out[rowIndex];
    }
};