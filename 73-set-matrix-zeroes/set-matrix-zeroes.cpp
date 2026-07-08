class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Better Approach: taking one extra row and column
        int m = matrix.size(); //number of rows
        int n = matrix[0].size(); //number of columns

        vector<int> newRow(m,0) ;
        vector<int> newCol(n,0);

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) {
                    newRow[i] = 1;
                    newCol[j] = 1;
                }
            }
        }

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(newRow[i] == 1 || newCol[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};