int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;
    for(int i = 1; i < pricesSize; i++){
        minPrice = prices[i] < minPrice ? prices[i] : minPrice;
        maxProfit = (prices[i] - minPrice) > maxProfit ? (prices[i] - minPrice) : maxProfit;
    }
    return maxProfit;
}