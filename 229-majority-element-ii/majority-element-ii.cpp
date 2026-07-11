class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Optimal Solution
        //TC=O(2N), SC=O(1)
        int n = nums.size();
        vector<int> ls; 
        int mini = (int)(n / 3) + 1;
        int c1 = 0, c2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        int count1 = 0, count2 = 0;

        for(int i=0; i<n; i++) {
            if(c1 == 0 && nums[i] != ele2) {
                c1 = 1;
                ele1 = nums[i];
            }
            else if(c2 == 0 && nums[i] != ele1) {
                c2 = 1;
                ele2 = nums[i];
            }
            else if (nums[i] == ele1) c1++;
            else if (nums[i] == ele2) c2++;
            else c1--, c2--;
        }

        for (int i=0; i<n; i++) {
            if (nums[i] == ele1) count1++;
            if (nums[i] == ele2) count2++;
        }
        if(count1 >= mini) ls.push_back(ele1);
        if(count2 >= mini) ls.push_back(ele2);
        sort(ls.begin(), ls.end());
        return ls;
        


        //Better Approach: using hashmap
        //TC=O(2N), SC=O(N)
        /*
        unordered_map<int, int> mpp;
        vector<int> ans;
        int n = nums.size();
        int minValue = (n/3) + 1;

        for(int i=0; i<n; i++) {
            mpp[nums[i]]++; 

            if(mpp[nums[i]] == minValue) {
                ans.push_back(nums[i]);
            }

            if(ans.size() == 2) {
                break;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        */



        //Brute Force Approach
        //TC=O(N^2), SC=O(1)
        /*
        vector<int> ans;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(ans.size() == 0 || find(ans.begin(), ans.end(), nums[i]) == ans.end()) {
                int c=0;
                for(int j=0; j<n; j++) {
                    if(nums[i] == nums[j]) {
                        c++;
                    }
                }
                if(c > (n/3)) {
                     ans.push_back(nums[i]);   
                }
            }
        }

        return ans;
        */
    }
};