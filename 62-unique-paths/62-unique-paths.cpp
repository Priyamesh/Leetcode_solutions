class Solution {
public:
    int memo[101][101];
    
    int path(int currRow,int currCol,int m, int n)
    {
        if(currRow==m-1 && currCol==n-1)
            return 1;
        
        // if(i==m || j==n)
        //     return 0;
        
        if(memo[currRow][currCol]!=-1)
            return memo[currRow][currCol];
        
        int down=0;
        if(currRow<m-1)
            down=path(currRow+1,currCol,m,n);
        
        int right=0;
        if(currCol<n-1)
            right=path(currRow,currCol+1,m,n);
        
        return memo[currRow][currCol]=down+right;
    }
    
    int uniquePaths(int m, int n) {
        memset(memo,-1,sizeof(memo));
        return path(0,0,m,n);
    }
};