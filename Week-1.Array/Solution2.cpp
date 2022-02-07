/*
    Problem Name - [121. Best Time to Buy and Sell Stock]
    Read this blog - [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/discuss/1735550/Python-Javascript-Easy-solution-with-very-clear-Explanation]
*/

// My Solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int i=0;
        int m=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(m>prices[i]){
                m=prices[i];
            }else{
                if((prices[i]-m)>ans) ans=prices[i]-m;
            }
        }
        return ans;
    }
};