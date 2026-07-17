class Solution {
public:
    long long calHours(vector<int>& piles, int mid) {
        long long ans = 0;
        for(int i=0; i<piles.size(); i++) {
            ans += ceil((double)piles[i] / (double)mid);
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end()); //nlogn
        int n = piles.size();
        int low = 1, high = piles[n-1];

        while(low <= high) {
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