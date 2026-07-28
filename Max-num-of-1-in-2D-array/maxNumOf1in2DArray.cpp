#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int lowerBound(vector<int> &nums, int m, int x) {
        int low = 0, high = m - 1;
        int ans = m;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= 1) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
        //Optimized Solution: TC= O(N*LogM), SC=O(1)
        int maxCnt = 0;
        int idx = -1;

        for(int i=0; i<n; i++) {
            int x = lowerBound(matrix[i], m, 1);
            int cnt = m - x;
            if(cnt > maxCnt) {
                maxCnt = cnt;
                idx = i;
            }
        }
        return idx;



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

