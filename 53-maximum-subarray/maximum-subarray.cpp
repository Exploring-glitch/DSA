class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Brute Force Appproach: take out all the possible subarrays and check the max sum
        //TC=O(N^3), SC=O(1)
        /*int n = nums.size();
        int maxSum = INT_MIN;
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                int sum = 0;
                for(int x=i; x<=j; x++) {
                    sum += nums[x];
                }
                maxSum = max(sum, maxSum);
            }
        }
        return maxSum;*/



        //Better Approach: Same approach as before, just optimize the inner loop 
        //TC=O(N^2), SC=O(1)
        /*int n = nums.size();
        int maxSum = INT_MIN;
        for(int i=0; i<n; i++) {
            int sum = 0;
            for(int j=i; j<n; j++) {
                sum += nums[j];
                maxSum = max(sum, maxSum);
            }
        }
        return maxSum;*/



        //Optimal Solution: Kadane's Algo
        //TC=O(N), SC=0(1)
        int n = nums.size();
        int sum = 0;
        int maxSum = INT_MIN;

        for(int i=0; i<n; i++){
            sum += nums[i];

            maxSum = max(sum, maxSum);

            if(sum < 0){
                sum = 0;
            }
        }
        return maxSum;

    }
};