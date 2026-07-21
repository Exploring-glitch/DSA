class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bottom = m-1;
        int left = 0, right = n-1;

        while(left <= right && top <= bottom) {
            //right
            for(int i=left; i<=right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            //bottom
            for(int i=top; i<=bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            //left
            if(top<=bottom) { //check: to make sure rows exist. (edge case: if there was one row, no leftward printing 
                for(int i=right; i>=left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            //top
            if(left <= right) { //check: to make sure columns exist. (edge case: if there was one col, no topward printing 
                for(int i=bottom; i>=top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};