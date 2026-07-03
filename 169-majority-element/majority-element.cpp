class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i : nums){
            int freq = 0;
            for(int ele : nums){
                if(ele == i){
                    freq++;
                }
            }

            if ( freq > n/2){
                return{i};
            }
        }
        return{};
    }
};