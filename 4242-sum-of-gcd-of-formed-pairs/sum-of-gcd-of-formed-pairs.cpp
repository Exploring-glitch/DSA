class Solution {
public:
    int gcdFunc(int a, int b) {
        while(b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        vector<int> prefixGCD;
        for(int i=0; i<n; i++) {
            mx = max(mx, nums[i]);
            int ans = gcdFunc(mx, nums[i]);
            prefixGCD.push_back(ans);
        }

        //sorting the prefixGCD
        sort(prefixGCD.begin(),prefixGCD.end()); 

        //forming pairs and performing GCD on each pairs
        int left = 0, right = prefixGCD.size()-1;
        vector<int> gcdOfPairs;
        while(left < right) {
            int ans = gcdFunc(prefixGCD[left], prefixGCD[right]); 
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