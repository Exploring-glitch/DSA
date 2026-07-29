class Solution {
public:
bool binarySearch(vector<int> &nums, int n, int target) {
        int low = 0;
        int high = n-1;
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
        int m = matrix.size(); //rows
        int n = matrix[0].size(); //columns

        for(int i=0; i<m; i++) {
            if(binarySearch(matrix[i], n, target) == true) return true;
        }
        return false;
    }
};