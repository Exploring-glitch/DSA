class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Brute Force Approach: Using an extra array
        //TC=2*O(N+M), SC=O(N+M)
        /*
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
        */


        //Optimal Solution
        
        int left = m-1; int right = n-1, index = m+n-1;

        while(left >= 0 && right >= 0) {
            if(nums1[left] > nums2[right]) {
                nums1[index] = nums1[left];
                left--;
            }
            else {
                nums1[index] = nums2[right];
                right--;
            }
            index--;
        }

        while (right >= 0) {
            nums1[index--] = nums2[right--];
        }
    }
};