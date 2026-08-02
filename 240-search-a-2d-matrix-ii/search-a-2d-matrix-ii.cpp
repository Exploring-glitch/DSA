class Solution {
public:
    /*bool binarySearch(vector<int> &nums, int n, int target) {
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
    }*/
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Optimal Approach
        //TC=O(M+N), SC=O(1)
        int m = matrix.size(); //rows
        int n = matrix[0].size(); //columns
        int row = 0, col = n-1;

        while(row <= m-1 && col >= 0) {
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) row++;
            else col--;
        }
        return false;



        //Better approach
        //TC=O(M * Log(M)), SC=O(1)
        /*
        int m = matrix.size(); //rows
        int n = matrix[0].size(); //columns

        for(int i=0; i<m; i++) {
            if(binarySearch(matrix[i], n, target) == true) return true;
        }
        return false;
        */
    }
};