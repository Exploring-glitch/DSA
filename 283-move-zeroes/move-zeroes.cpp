class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        //Two pointer approach
        int j = -1;
        for(int i=0; i<n; i++) {
            if(nums[i] == 0) {
                j = i; //store the index of the first 0th element in j
                break;
            }
        }

        if(j == -1) { //means there are no zeroes in the array
            return;
        }

        for(int i=j+1; i<n; i++) {
            if(nums[i] != 0) {
                swap(nums[j], nums[i]);
                j++;
            }
        }













        /*//my approach: count the number of zeroes and delete the zeroes from the array. 
        //Push the zeroes back in the array as per the count.
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
        }*/

    }
};