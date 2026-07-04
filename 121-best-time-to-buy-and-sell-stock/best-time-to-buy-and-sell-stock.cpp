class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //TC=O(N), SC=O(1)
        int profit = 0;
        int bestBuy = prices[0];
        int n = prices.size();

        for(int i=1; i<n; i++) {
            if(prices[i] > bestBuy) {
                int p = prices[i] - bestBuy;
                profit = max (profit, p);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return profit;
    }
};