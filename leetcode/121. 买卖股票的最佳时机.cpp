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
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)  return 0;
        int min_cur = prices[0];
        int res=0; 
        for(int i=1;i<prices.size();i++)
        {
            //遍历，记录当前的最小值，以及此时的差
            if(prices[i] < min_cur)
            {
                min_cur = prices[i];
            }
            int profit = prices[i] - min_cur;
            if(profit > res)
            {
                res = profit;
            }
           
            
        }
        
        return res;
        
    }
};
