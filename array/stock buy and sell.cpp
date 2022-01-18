/*You want to maximize your profit by choosing a single day to buy one 
stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0.

Input: prices = [7,1,5,3,6,4]
Output: 5
*/ 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0, maxi = 0;
        for(int i=1;i<prices.size();i++){
            sum += prices[i]-prices[i-1];
            if(sum<0)
                sum =0;
            maxi = max(maxi, sum);
        }
        return maxi;
        
    }
};
