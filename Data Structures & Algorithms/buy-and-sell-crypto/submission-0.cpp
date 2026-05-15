class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyDay = prices[0];
        int maxProfit = 0;
        for(int price: prices){
            if(buyDay > price){
                buyDay = price;
            }

            if( maxProfit <= price - buyDay){
                maxProfit = price - buyDay;
            }
        }
        return maxProfit;
    }
};
