class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start=0;
        int end = row*col-1;
        int mid = (start+end)/2;
        while(start<=end){
            int i = mid/col;
            int j = mid%col;
            if(matrix[i][j]==target)
                return true;
            if(matrix[i][j]<target){
                start = mid+1;
            }
            if(matrix[i][j]>target){
                end = mid-1;
            }
        mid = (start+end)/2;
        }
        return false;
    }
};