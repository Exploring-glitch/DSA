class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int c = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                c++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        
        while(c != 0) {
            nums.push_back(0);
            c--;
        }

    }
};