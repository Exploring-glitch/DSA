class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Optimal Approach
        //TC=O(2 * M * N), SC=O(1)
        int m = matrix.size(); //number of rows
        int n = matrix[0].size(); //number of columns

        int col0 = 1;

        // matrix[0][..] for row (1st row) for col
        // matrix[..][0] (1st column) for row


        for(int i=0; i<m; i++) { //runs (M * N) times
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) {
                    //mark the ith row
                    matrix[i][0] = 0;

                    //mark the jth col
                    if(j != 0) {
                        matrix[0][j] = 0;
                    }
                    else {
                       col0 = 0; 
                    }
                   
                }
            }
        }

        for(int i=1; i<m; i++) { //runs (M * N) times
            for(int j=1; j<n; j++) {
                if(matrix[i][j] != 0) {
                    //check for rows and cols
                    if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if(matrix[0][0] == 0) {
            for(int j=0; j<n; j++) {
                matrix[0][j] = 0;
            }
        }

        if(col0 == 0) {
            for(int i=0; i<m; i++) {
                matrix[i][0] = 0;
            }
        }



        //Better Approach: taking one extra row and column
        //TC=O(2 * M * N)), SC=O(M + N)
        /*
        int m = matrix.size(); //number of rows
        int n = matrix[0].size(); //number of columns

        //extra one row and one col
        vector<int> newRow(m,0); 
        vector<int> newCol(n,0);

        for(int i=0; i<m; i++) { //runs (M * N) times
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) {
                    //mark the ith row and jth col (of extra ones)
                    newRow[i] = 1;
                    newCol[j] = 1;
                }
            }
        }

        for(int i=0; i<m; i++) { //runs (M * N) times
            for(int j=0; j<n; j++) {
                //check for rows and cols
                if(newRow[i] == 1 || newCol[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
        */
    }
};