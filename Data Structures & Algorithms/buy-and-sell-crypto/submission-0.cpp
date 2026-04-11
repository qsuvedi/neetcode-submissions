class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //brute force solution
        //TC: O(n^2)
        //SC: O(1)

        int maxProfit = 0;
        for (int i = 0; i < prices.size() - 1; ++i) {
            for (int j = i + 1; j < prices.size(); ++j) {
                int potentialProfit = prices[j] - prices[i];
                maxProfit = max(maxProfit, potentialProfit);
            }
        }
        return maxProfit;
    }
};
