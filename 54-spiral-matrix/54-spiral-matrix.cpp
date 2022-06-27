class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>out;
        
        int left=0;
        int right=matrix[0].size()-1;
        int top=0;
        int bottom=matrix.size()-1;
        
        int dir=0;
        
        
        while(left<=right && top<=bottom)
        {
            dir=dir%4;
            
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    out.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    out.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    out.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            else
            {
                for(int i=bottom;i>=top;i--)
                {
                    out.push_back(matrix[i][left]);
                }
                left++;
            }
            dir++;
        }
        return out;
        
    }
};