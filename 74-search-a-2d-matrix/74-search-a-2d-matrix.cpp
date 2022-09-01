class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
            
        int left = 0, right = rows * cols - 1;
        while(left <=right){
            int mid = left + (right - left) / 2;
            int i = mid/cols;
            int j = mid % cols;
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] < target) left = mid + 1;
            else right = mid - 1;
            
        }
        return false;
    }
};