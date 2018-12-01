class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        if(prices.size()==0)
        {
            return 0;
        }
        int buy = prices[0];
        for(int i =0;i<prices.size();i++)
        {
            buy = min(buy, prices[i]);
            maxprofit = max(maxprofit, prices[i]-buy);
        }
        return maxprofit;
        
        
        
//         for (int i = 0; i < prices.size()-1; i++)
//         {
            
//             for (int j = i+1; j < prices.size(); j++)
//             {
//                 int max_tp=0;
//                 max_tp = prices[j] - prices[i];
//                 if(maxprofit < max_tp)
//                 {
//                     maxprofit = max_tp;
//                 }
//             }
//         }
//         return max(maxprofit, 0);
    }
};
