class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>matrix(n,vector<int>(n,0));
        
        int left=0;
        int right=matrix[0].size()-1;
        int top=0;
        int bottom=matrix.size()-1;
        
        int dir=0;
        int count=1;
        
        while(left<=right && top<=bottom)
        {
            dir=dir%4;
            
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    matrix[top][i]=count++;
                }
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    matrix[i][right]=count++;
                }
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    matrix[bottom][i]=count++;
                }
                bottom--;
            }
            else
            {
                for(int i=bottom;i>=top;i--)
                {
                    matrix[i][left]=count++;
                }
                left++;
            }
            dir++;
        }
        return matrix;
        
        
    }
};