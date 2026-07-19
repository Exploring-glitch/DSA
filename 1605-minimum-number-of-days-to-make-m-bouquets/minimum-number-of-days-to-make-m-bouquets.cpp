class Solution {
public:
    bool possibleFunc(vector<int>& bloomDay, int mid, int m, int k) {
        int c=0, numOfBouquet=0;
        for(int i=0; i<bloomDay.size(); i++) {
            if(bloomDay[i] <= mid) {
                c++;
            }
            else {
                numOfBouquet += (c/k);
                c=0;
            }
        }
        numOfBouquet += (c/k);
        if(numOfBouquet >= m) return true;
        else return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        //TC=O(N log(maxi-mini+1)), SC=O(1)
        int n = bloomDay.size();
        if((long long)m * k > n) return -1;

        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0; i<bloomDay.size(); i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini;
        int high = maxi;
        int ans = high;

        while(low <= high) { //log (maxi-mini+1) 
            int mid = (low + high) / 2;
            if(possibleFunc(bloomDay, mid, m, k) == true) { //n
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};