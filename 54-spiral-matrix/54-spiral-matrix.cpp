class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total = m*n;
        int count = 0;
        int rows = 0;
        int cols = 0;
        int rowCount = m-1;
        int colCount = n-1;
        int i;
        while(count < total){
            for(i = cols; count<total && i<=colCount; i++){
                ans.push_back(matrix[rows][i]);
                count++;
            }
            rows++;
            
            for(i = rows; count<total && i<=rowCount; i++){
                ans.push_back(matrix[i][colCount]);
                count++;
            }
            
            colCount--;
            
            for(i = colCount; count<total && i>=cols; i--){
                ans.push_back(matrix[rowCount][i]);
                count++;
            }
            rowCount--;
            
            for(i = rowCount; count<total && i>=rows; i--){
                ans.push_back(matrix[i][cols]);
                count++;
            }
            cols++;
        }
        return ans;
         
    }
};   