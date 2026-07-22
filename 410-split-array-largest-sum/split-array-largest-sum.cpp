class Solution {
public:
    bool isSubarrayPossible(vector<int>arr, int mid, int k) {
        int eleSum = 0;
        int numberOfSubarrays = 1; 
        for(int i=0; i<arr.size(); i++) {
            if(eleSum + arr[i] > mid) {
                numberOfSubarrays++;
                eleSum = arr[i];
            }
            else {
                eleSum += arr[i];
            }
        }
        if(numberOfSubarrays > k) return false;
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        //TC= O(N * log(sum of array - max element + 1), SC=O(1)
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