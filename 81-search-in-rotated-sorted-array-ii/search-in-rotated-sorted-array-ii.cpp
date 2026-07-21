class Solution {
public:
    bool search(vector<int>& nums, int target) {
       //Optimal solution
        //TC=O(LOGN), SC=O(1)
        int n = nums.size();
        int low = 0;
        int high  = n-1;
        while(low <= high) {
            int mid = (low + high)/2;

            if(nums[mid] == target) return true;

            if(nums[mid] == nums[low] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }

            if(nums[low] <= nums[mid]) { //check if left portion of the mid is sorted
                if(target >= nums[low] && target <= nums[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if(target >= nums[mid] && target <= nums[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return false; 
    }
};