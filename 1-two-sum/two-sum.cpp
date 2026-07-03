class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Better Approach: Hash-map
        //TC=O(N), SC=O(N)
        int n = nums.size();
        unordered_map<int, int> m;

        for(int i=0; i<n; i++) {
            m[nums[i]] = i;
        }

        for(int i=0; i<n; i++) {
            int ele = target - nums[i];

            if(m.find(ele) != m.end() and m[ele] != i) {
                return{i, m[ele]};
                break;
            } 
        }

        return {};



        //Brute Force Approach
        //TC=O(N^2), SC= O(1)
        /*int n = nums.size();
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if( nums[i] + nums[j] == target){
                    return {i,j};
                    break;
                }
            }
        }
        return{};*/
    }
        
};