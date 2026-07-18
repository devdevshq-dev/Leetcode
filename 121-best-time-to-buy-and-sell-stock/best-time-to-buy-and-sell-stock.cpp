class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int maxPrice = prices[n - 1];

        for (int i = n - 1; i >= 0; i--){
            profit = max(profit, maxPrice - prices[i]);
            maxPrice = max(maxPrice, prices[i]);
        }
        return profit;
    }
};