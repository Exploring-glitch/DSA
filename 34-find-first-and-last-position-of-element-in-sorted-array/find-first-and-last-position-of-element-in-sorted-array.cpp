class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //Brute Force: using Linear Search
        //TC=O(N), SC=O(1)
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
    }
};