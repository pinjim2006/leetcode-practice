class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxPro = 0;
        for(int i = 1; i < prices.size(); i++){
            minPrice = min(prices[i], minPrice);
            maxPro = max(prices[i] - minPrice, maxPro);
        }
        return maxPro;
    }
};