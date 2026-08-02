#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int upperBound(vector<int> &mat, int n, int x) { //runs log n times
        int low = 0, high = n - 1;
        int ans = n; 

        while (low <= high) {
            int mid = (low + high) / 2;
            if (mat[mid] > x) {
                ans = mid;        
                high = mid - 1;   
            } else {
                low = mid + 1;  
            }
        }
        return ans;  
    }

    int countSmallEqual(vector<vector<int>>& mat, int m, int n, int mid){ //runs (m * log(n)) times
        int count = 0;
        for(int i=0; i<m; i++){
            count += upperBound(mat[i], n, mid); //runs log n times
        }
        return count;
    }

    int findMedian(vector<vector<int>>& mat) { 
        //Optimal Approach
        //TC=O(log(max ele)*(m*log(N)))
        int low = INT_MAX, high = INT_MIN;
        int m = mat.size(); //rows
        int n = mat[0].size(); //cols

        for(int i=0; i<m; i++) { //runs m times
            low = min(low, mat[i][0]);
            high = max(high, mat[i][n-1]);
        }

        int req = (m*n) / 2;

        while(low <= high) { //runs log(max ele) times
            int mid = (low + high) / 2;
            int x = countSmallEqual(mat, m, n, mid); //runs (m*log(n)) times
            if(x > req) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
int main() {
    Solution obj;
    vector<vector<int>> mat = {
        {4,8,9},
        {2,6,7},
        {1,2,3}
    };
    cout << "Median: " << obj.findMedian(mat) << endl;
    return 0;
}