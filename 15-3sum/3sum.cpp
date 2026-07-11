class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Optimal Approach: using two pointer
        //TC=O(N logN) + O(N^2), SC= O(no. of triplets)
        int n = nums.size();
        vector<vector<int>> ans; 
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j = i+1;
            int k = n-1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) j++;
                else if(sum > 0) k--;
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k &&nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
            }
        }

        return ans;



        //Better Approach: using hashset
        //TC=O(N^2), SC=O(N) + 2 * O(no. of triplets)
        /*
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0; i<n;i++) {
            unordered_set<int> hashset;
            for(int j=i+1; j<n; j++) {
                int thirdEle = -(nums[i] + nums[j]);
                
                if(hashset.find(thirdEle) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], thirdEle};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }

                hashset.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
        */



        //Brute Force Sol: generate all triplets
        //TC=O(N^3 * log(no. of triplets)), SC= 2* O(no. of triplets)
        /*
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0; i<n;i++) {
            for(int j=i+1; j<n; j++) {
                for(int k=j+1; k<n; k++) {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
        */
    }
};