int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    int min = prices[0];

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] > min) {
            profit += (prices[i] - min);
            min = prices[i]; 
        } else {
            min = prices[i]; 
        }
    }
    return profit;
}
