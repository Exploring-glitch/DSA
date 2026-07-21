class Solution {
public:
    vector<int> genRow(int row) { //function to generate the specified row
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);

        for(int i=1; i<row; i++) {
            ans = ans * (row - i);
            ans = ans / (i);
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        //Optiomal Approach
        vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++) {
            vector<int> temp = genRow(i);

            ans.push_back(temp);
        }
        return ans;
    }
};