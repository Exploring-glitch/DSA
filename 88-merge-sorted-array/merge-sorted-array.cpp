class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Brute Force Approach: Using an extra array
        vector <long long> nums3(m+n);
        int left = 0, right = 0, index = 0;

        while(left < m && right < n) {
            if(nums1[left] <= nums2[right]) {
                nums3[index] = nums1[left];
                left++, index++;
            }
            else {
                nums3[index] = nums2[right];
                right++, index++;
            }
        }
        while(left < m) {
            nums3[index++] = nums1[left++];
        }
        while(right < n) {
            nums3[index++] = nums2[right++];
        }

        for(int i=0; i<m+n; i++) {
            nums1[i] = nums3[i];
        }
    }
};