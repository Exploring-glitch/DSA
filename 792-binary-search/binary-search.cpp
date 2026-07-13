class Solution {
public:
    int recursiveFunc(vector<int>& nums, int low, int high, int target) {
        if (low > high) {
            return -1;
        }

        int mid = (low + high) / 2;
        if(target == nums[mid]) {
                return mid;
            }
            else if(target > nums[mid]) {
                return recursiveFunc(nums, mid + 1, high, target);            
            }
            else {
                return recursiveFunc(nums, low, mid - 1, target); 
            }

    }
    int search(vector<int>& nums, int target) {
        //Recursive approach
        int n = nums.size();
        int low = 0;
        int high = n-1;
        return recursiveFunc(nums, low, high, target);

        //Bineray Search Algo
        //TC=O(LOGN), SC=O(1)
        /*
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(target == nums[mid]) {
                return mid;
            }
            else if(target > nums[mid]) {
                low = mid + 1;            
            }
            else {
                high = mid - 1;
            }
        }
        return -1;
        */
    }
};