class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        for(int i=0; i<n; i++) {
            mx = max(mx, nums[i]);
            int ans = gcd(mx, nums[i]);
            nums[i] = ans;
        }

        sort(nums.begin(),nums.end()); 


        //forming pairs and performing GCD on each pairs
        int left = 0, right = n-1;
        vector<int> gcdOfPairs;
        while(left < right) {
            int ans = gcd(nums[left], nums[right]); 
            gcdOfPairs.push_back(ans);
            left++;
            right--;
        }

        //adding the elements stored in gcdOfPairs
        long long sum = 0;
        for(int i=0; i<gcdOfPairs.size(); i++) {
            sum += gcdOfPairs[i];
        }

        return sum;
    }
};