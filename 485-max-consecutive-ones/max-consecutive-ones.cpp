class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxOccurance = 0;
        int c = 0;

        for(int i=0; i<n; i++) {
            if(nums[i] == 1) {
                c++;
                maxOccurance = max(maxOccurance, c);
            }
            else {
                c = 0;
            }
        }

        return maxOccurance;
    }
};