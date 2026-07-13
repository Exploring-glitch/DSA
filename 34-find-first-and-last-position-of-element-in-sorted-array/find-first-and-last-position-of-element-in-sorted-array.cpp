class Solution {
public:
    int lowerBound(vector<int>& nums, int target) {       
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;

        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
    int upperBound(vector<int>& nums, int target) {       
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;

        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        //using upper bound and lower bound
        //TC=2*O(LOGN), SC=O(1)
        int lb = lowerBound(nums,target);
        if(lb == nums.size() || nums[lb] != target) {
            return {-1,-1};
        }
        int ub = upperBound(nums,target) - 1;

        return {lb, ub};




        
        //Brute Force: using Linear Search
        //TC=O(N), SC=O(1)
        /*
        int n = nums.size();
        int first = -1, last = -1;

        for(int i=0; i<n; i++) {
            if(nums[i] == target) {
                if(first == -1) {
                    first = i;
                }
                last = i;
            }
        }
        return {first, last};
        */
    }
};