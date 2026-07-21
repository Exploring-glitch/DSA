class Solution {
public:
    bool isSubarrayPossible(vector<int>arr, int mid, int k) {
        int pages = 0;
        int numberOfStudents = 1; 
        for(int i=0; i<arr.size(); i++) {
            if(pages + arr[i] > mid) {
                numberOfStudents++;
                pages = arr[i];
            }
            else {
                pages += arr[i];
            }
        }
        if(numberOfStudents > k) return false;
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            maxi = max(maxi, nums[i]);
            sum += nums[i];
        }

        int low = maxi;
        int high = sum;
        int ans = -1;
        while(low <= high) {
            int mid = (low + high)/2;
            if(isSubarrayPossible(nums, mid, k) == true) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};