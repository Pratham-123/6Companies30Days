class Solution {
  public:
    int maxProfit(int k, int n, int prices[]) 
   { 
    //int n=prices.size();
        //Case-1: n<=1 OR k==0
        if(k==0 || n<=1)
            return 0;
        
        //Case-2: k>=n
        if(k>=n)
        {
            int res = 0;
            for(int i=1;i<n;++i)
                if(prices[i]>prices[i-1])
                    res+=(prices[i]-prices[i-1]);
            return res;
        }
        
        //Case-3: 1<=k<n
        vector<int> bought(k+1,INT_MIN);  
        vector<int> sell(k+1,0);
        
        bought[0] = -prices[0]; //Buying on 1st day will always cost -prices[0]
        for(int i=0;i<n;++i)
        {
            for(int j=1;j<=k;++j)
            {
                int save = bought[j];
                bought[j] = max(bought[j],sell[j-1]-prices[i]);
                sell[j] = max(sell[j], save+prices[i]);
            }
        }
        return sell[k];
    }
};
