class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Better Approach: Hashinh
        //TC=O(), SC=O()

        int n = nums.size();
        unordered_map<int,int> mpp;
        
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }

        for(auto i : mpp){
            if(i.second > n/2) {
                int ans = i.first;
                return ans;
            }
        }
        return{};


        //Brute Force Approach
        //TC=O(N^2), SC=O(1)
        /*int n = nums.size();
        for(int i : nums){
            int freq = 0;
            for(int ele : nums){
                if(ele == i){
                    freq++;
                }
            }

            if (freq > n/2){
                return{i};
            }
        }
        return{};*/
    }
};