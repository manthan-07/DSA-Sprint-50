// LeetCode 121: Best Time to Buy and Sell Stock
// Approach: Track the minimum price so far and calculate the maximum profit at each day.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), min = prices[0], profit = 0;
        for(int i = 1; i < n; i++){
            if(prices[i] < min) min = prices[i];
            else if(prices[i] - min > profit) profit = prices[i] - min;
        }
        return profit;
    }
};