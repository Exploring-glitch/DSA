class Solution {
public:
    int daysReqFunc(vector<int>& weights, int capacity) {
        int n = weights.size();
        int days=1, load=0;

        for(int i=0; i<n; i++) {
            if(load + weights[i] > capacity) {
                days++;
                load = weights[i];
            }
            else {
                load += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        //TC=O(N log (sum-maxi+1)), SC=O(1)
        int n = weights.size();
        int maxi = INT_MIN;
        int sum = 0;
    
        for(int i=0; i<n; i++) {
            maxi = max(maxi, weights[i]);
            sum += weights[i];
        }

        int low = maxi;
        long long high = sum;

        while(low <= high) { //runs (sum-maxi+1) times
            long long mid = (low+high)/2;
            int daysReq = daysReqFunc(weights, mid); //runs n times
            if(daysReq <= days) {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};