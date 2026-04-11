class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //two pointer method
        //TC: O(n)
        //SC: O(1)
        int l = 0;
        int r = 1;
        int maxProfit = 0;
        //i represents selling value
        while (r < prices.size()) {
            if (prices[r] > prices[l]) {
                int potentialProfit = prices[r] - prices[l];
                maxProfit = max(potentialProfit, maxProfit);
            } else { // we found a cheaper price to buy at which all of the following prices should be compared to
                l = r;
            }
            ++r;
        }

        return maxProfit;
    }
};
