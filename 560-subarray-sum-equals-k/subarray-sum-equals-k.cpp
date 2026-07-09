class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Optimal Approach
        //TC=O(N) , SC=O(N)
        int n = nums.size();
        int count = 0, preSum = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        for(int i=0; i<n; i++) { //runs N times
            preSum += nums[i];
            int remaining = preSum - k;
            count += mpp[remaining];
            mpp[preSum] += 1;
        }
        return count;



        //Brute Force Approach (Better)
        //TC=O(N^2) , SC=O(1)
        /*
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
        */
    }
};