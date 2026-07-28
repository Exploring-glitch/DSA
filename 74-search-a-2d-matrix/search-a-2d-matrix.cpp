class Solution {
public:
    bool binarySearch(vector<int> &nums, int m, int target) {
        int low = 0;
        int high = m-1;
        while(low <= high) {
            int mid = (low+high)/2;
            if(nums[mid] == target) {
                return true;
            }
            else if(nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Optimal Solution
        //TC=O(N + log(M)), SC=O(1)
        
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n; i++) {
            if(matrix[i][0] <= target && target <= matrix[i][m-1]) {
                return binarySearch(matrix[i], m, target);
            }
        }
        return false;
    }
};