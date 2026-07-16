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


        //forming pairs and performing GCD on each pairs and adding them simultaneously.
        int left = 0, right = n-1;
        long long sum = 0;
        while(left < right) {
            int ans = gcd(nums[left], nums[right]); 
            sum += ans;
            left++;
            right--;
        }

        return sum;
    }
};