class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Optimal Solution: Moore's Voting Algorithm
        //TC=O(N), SC=O(1)
        int n = nums.size();
        int count = 0;
        int ele;

        for(int i=0; i<n; i++) {
            if(count == 0) {
                count = 1;
                ele = nums[i];
            }
            else if(nums[i] == ele) {
                count++;
            }
            else {
                count--;
            }
        }

        return ele;





        //Better Approach: Hashing
        //TC=O(2N), SC=O(N)
        /*int n = nums.size();
        unordered_map<int,int> mpp;
        
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }

        for(auto i : mpp){
            if(i.second > n/2) {
                return i.first;
            }
        }
        return{};*/


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
                return i;
            }
        }
        return{};*/
    }
};