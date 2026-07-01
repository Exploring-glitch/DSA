class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=1; i<n; i++) {
            if(nums[i-1] > nums[i]) {
                count++;
            }
        }

        if(nums[n-1] > nums[0]) { //compare last and first element
            count++;
        }


        //if count is 0, it means array contains same elements.
        //if count is 1, it means array is sorted and rotated. 
        //if count > 1, it means array is unsorted.
        if(count == 0 || count == 1) { 
            return true;
        }
        else {
            return false;
        }
    }
};