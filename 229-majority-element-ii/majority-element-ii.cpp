class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Brute Force Approach
        //TC=O(N^2), SC=O(1)
        vector<int> ans;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(ans.size() == 0 || find(ans.begin(), ans.end(), nums[i]) == ans.end()) {
                int c=0;
                for(int j=0; j<n; j++) {
                    if(nums[i] == nums[j]) {
                        c++;
                    }
                }
                if(c > (n/3)) {
                     ans.push_back(nums[i]);   
                }
            }
        }

        return ans;
    }
};