class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Better solution
        //TC = O(2N), SC=O(1)
        int n = nums.size();
        int count_0 = 0, count_1 = 0, count_2 = 0;

        for(int i=0; i<n; i++) { //this loop runs N times
            if(nums[i] == 0) {
                count_0++;
            }
            else if(nums[i] == 1) {
                count_1++;
            }
            else {
                count_2++;
            }
        }

        for(int i=0; i<count_0; i++) { //these 3 loops together runs N times because count of 0's + 1's + 2's = N elements
            nums[i] = 0;
        }
        for(int i=count_0; i<count_0 + count_1; i++) {
            nums[i] = 1;
        }
        for(int i=count_0 + count_1; i<n; i++) {
            nums[i] = 2;
        }
    }
};