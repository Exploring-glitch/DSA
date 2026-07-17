class Solution {
public:
    int maxVal (vector<int> piles) {
        int ans = INT_MIN;
        for(int i=0; i<piles.size(); i++) { //N times
            ans = max(ans, piles[i]);
        }
        return ans;
    }

    long long calHours(vector<int>& piles, int mid) {
        long long ans = 0;
        for(int i=0; i<piles.size(); i++) { //N times
            ans += ceil((double)piles[i] / (double)mid);
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {  
        int low = 1, high = maxVal(piles);

        while(low <= high) { //Max ele in piles times
            int mid = (low + high) / 2;
            long long totalHours = calHours(piles, mid);
            if(totalHours <= h) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return low;
    }
};