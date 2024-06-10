class Solution {
public:
  
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<bool> zeroRows(n, false);
        vector<bool> zeroCols(m, false);

        // First pass to mark the rows and columns
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    zeroRows[i] = true;
                    zeroCols[j] = true;
                }
            }
        }

        // Second pass to set the rows to zero
        for (int i = 0; i < n; i++) {
            if (zeroRows[i]) {
                for (int j = 0; j < m; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Second pass to set the columns to zero
        for (int j = 0; j < m; j++) {
            if (zeroCols[j]) {
                for (int i = 0; i < n; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
