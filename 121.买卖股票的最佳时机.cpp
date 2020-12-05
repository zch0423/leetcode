/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrice = 1e5;  // large number could be ok
        for(auto price:prices){
            profit = max(profit, price-minPrice);
            minPrice = min(minPrice, price);
        }
        return profit;

        // int s = prices.size();
        // if(s==0){
        //     return 0;
        // }
        // int profit = 0;
        // int temp;
        // vector<int> minPrice(s ,prices[0]);
        // vector<int> maxPrice(s ,prices.back());
        // for(int i=1;i<s;++i){
        //     minPrice[i] = min(minPrice[i-1], prices[i]);
        //     maxPrice[s-i-1] = max(maxPrice[s-i], prices[s-i-1]);
        // }
        // for(int i=0;i<s;++i){
        //     temp = maxPrice[i] - minPrice[i];
        //     profit = max(profit, temp);
        // }
        // return profit;
    }
};
// @lc code=end

