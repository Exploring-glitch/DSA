class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Optimal Solution
        int n= nums.size();
        int length = 1;
        unordered_set<int> s;

        if(n == 0) {
            return 0;
        }

        for(int i=0; i<n; i++) {
            s.insert(nums[i]);
        }

        for(auto ele : s) {
            if(s.find(ele - 1) == s.end()) { //check if ele is the 1st element
                int c = 1;
                int x = ele;
                while(s.find(x + 1) != s.end()) {
                    x++;
                    c++;
                }
                length = max(length, c);
            }
        }
        return length;




        //Better Approach:
        //TC=IO(N LogN + N), SC=O(1)
        /*sort(nums.begin(), nums.end()); //runs N logN times

        int n  = nums.size();
        int lastSmaller = INT_MIN;
        int count  = 0, length = 1;

        if(n == 0) { //if array is empty
            return 0;
        }
        for(int i=0; i<n; i++) { //runs N times
            if(nums[i] - 1 == lastSmaller) {
                count++;
                lastSmaller = nums[i];
            }
            else if (nums[i] != lastSmaller) { 
                count = 1;
                lastSmaller = nums[i];
            }

            length = max(length, count);
        }
        return length;*/
    }
};