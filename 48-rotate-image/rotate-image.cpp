class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Better Approach: (In-Place) Transpose the given matrix and then reverse every row
        //TC=O(), SC=O()
        int n = matrix.size();
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }





        //Brute Force Approach: Taking another matrix(not solving in in-place)
        //TC=O(N^2), SC=O(N^2)
        /*
        int n = matrix.size();
        vector<vector<int>> ans(n, vector<int>(n, 0));

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                ans[j][n-1-i] = matrix[i][j];
            }
        }
        matrix = ans;
        */
    }
};