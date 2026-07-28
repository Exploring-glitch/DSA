#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
        //Brute Force Solution: TC= O(N*M), SC=O(1)
        /*
        int maxCnt = INT_MIN;
        int idx = -1;

        for(int i=0; i<n; i++) {
            int cnt = 0;
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == 1) {
                    cnt++;
                }
            }
            if(cnt > maxCnt) {
                maxCnt = cnt;
                idx = i;
            }
        }
        return idx;
        */
    }

};

int main() {
    vector<vector<int>> matrix = {{1, 0, 0}, {1, 1, 1}, {0, 0, 1}};
    int n = 3, m = 3;

    Solution obj;
    cout << "The row with maximum no. of 1's is: " << obj.rowWithMax1s(matrix, n, m) << '\n';
}

