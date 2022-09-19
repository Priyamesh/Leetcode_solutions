class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        
        int row=grid.size();
        int col=grid[0].size();
        int currRow=0;
        int currCol=col-1;
        int ans=0;
        while(currRow<row)
        {
            while(currCol>=0 && grid[currRow][currCol]<0)
                currCol--;
            
            ans+= ( col - currCol -1);
            currRow++;
        }
        return ans;
    }
};