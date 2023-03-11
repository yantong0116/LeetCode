int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    int start_price = prices[0];
    
    for(int i = 0; i < pricesSize; i++){
        profit = fmax(profit, prices[i]-start_price);
        start_price = fmin(start_price, prices[i]);
    }
    return profit;
}