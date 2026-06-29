class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort (nums.begin(), nums.end());
        int len = nums.size();

        long left = 0, right = 0, total = 0;
        long ans = 0;

        while (right < len) {
            total += nums[right];
        
            while (nums[right] * (right - left + 1) > total + k) { //invalid window condition
                total -= nums[left];
                left += 1;
            }
            ans = max((right - left + 1), ans);
            right += 1;
        } 
        return ans;
    }
};