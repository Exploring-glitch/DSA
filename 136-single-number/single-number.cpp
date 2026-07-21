class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(int i=0; i<nums.size(); i++) {
            xor1 = xor1 ^ nums[i];
        }
        return xor1;





        /*
        //TC=O(N) + O(n/2 +1), SC=O(N/2 +1)
        unordered_map<int, int> m;

        for(int i=0; i< nums.size(); i++) { //this will run n times
            m[nums[i]]++;
        }

        for(auto i : m) { //This loop will run for (n/2 +1) times
            if(i.second == 1) {
                return i.first;
            }
        }
        return -1;
        */
    }
};