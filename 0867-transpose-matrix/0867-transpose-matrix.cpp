class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int cols = matrix.size();
        int rows = matrix[0].size();
        vector<vector<int>> ans(rows, vector<int>(cols));
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
            ans[i][j] = matrix[j][i];
            return ans;
        
    }
};