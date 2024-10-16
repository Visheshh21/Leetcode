class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0,right=1;
        int max_profit=0;
        int profit=0;
        int mini=prices[0];
        while(left<=right && right<prices.size()){
            if(prices[right]<mini){
                mini=prices[right];
            }
            profit=prices[right]-mini;
            max_profit=max(max_profit,profit);
            right++;
        }
        return max_profit;
    }
};