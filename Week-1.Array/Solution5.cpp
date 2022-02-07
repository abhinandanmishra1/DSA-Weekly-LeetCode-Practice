/*
    Problem Name - [122. Best Time to Buy and Sell Stock II]
    Read this blog - [https://medium.com/theleanprogrammer/best-time-to-buy-and-sell-stock-ii-140d90750ebd]
*/
// My Solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int i=0;
        while(i<prices.size()-1){
            if(prices[i]<prices[i+1]){
                profit+=prices[i+1]-prices[i];
            }
            i++;
        }
        return profit;
    }
};