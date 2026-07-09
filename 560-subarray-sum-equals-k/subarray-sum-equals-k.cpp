class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Brute Force Approach
        //TC=O(N^2) , SC=O(1)
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++) {
            int s = 0;
            for(int j=i; j<n; j++) {
                s += nums[j];
                
                if(s == k) {
                    count++;
                }
            }
        }

        return count;
    }
};