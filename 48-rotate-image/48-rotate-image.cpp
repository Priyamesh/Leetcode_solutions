class Solution {
public:
    
    /* Idea :
    reverse the matrix and then take transpose of it
    or 
    take transpose and then reverse each row
    */
    
    void rotate(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        
        reverse(matrix.begin(),matrix.end());
        
        for(int i=0;i<row;i++)
        {
            for(int j=i;j<col;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
    
    
//     void rotate_TR(vector<vector<int>>& matrix) {
//         int n=matrix.size()-1;
//         int m=matrix[0].size()-1;
        
//         for(int i=0;i<=n;i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         for(int i=0;i<=n;i++)
//         {
//             reverse(matrix[i].begin(),matrix[i].end());
//         }
//     }
};