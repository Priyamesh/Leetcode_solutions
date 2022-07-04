class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
//         int row=matrix.size();
//         int col=matrix[0].size();
        
//         for(int i=0;i<row;i++)
//         {
//             if(target==matrix[i][0] || target ==matrix[i][col-1])
//                 return true;
            
//             if(target > matrix[i][0] && target < matrix[i][col-1])
//             {
//                 int low=0;
//                 int high=col-1;
                
//                 while(low<=high)
//                 {
//                     int mid=low+(high-low)/2;
                    
//                     if(target==matrix[i][mid])
//                         return true;
//                     else if(target > matrix[i][mid])
//                         low=mid+1;
//                     else high=mid-1;
//                 }
//             }
//         }
//         return false;
        
        
        int row=0;
        int col=matrix[0].size()-1;
        
        while(row<matrix.size() && col >=0)
        {
            // cout<<row<<" "<<col<<"\n";
            if(target > matrix[row][col])
                row++;
            else if(target < matrix[row][col])
                col--;
            else
                return true;
                
        }
        return false;
        
        
    }
};