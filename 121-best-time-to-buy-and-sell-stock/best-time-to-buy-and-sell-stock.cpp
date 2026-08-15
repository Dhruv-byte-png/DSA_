class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_cost = prices[0];
        int profit = 0;
        for(int i =1 ; i<prices.size(); i++){
            if(prices[i] < min_cost)
                min_cost = prices[i];
            else if(prices[i] - min_cost > profit)
                profit = prices[i] - min_cost;
        }
        return profit;
    }
};