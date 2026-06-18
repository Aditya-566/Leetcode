class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //   vector<int> stk;
       int maxprof=0;
       int mn=prices[0];
    
      for(int i=0;i<prices.size();i++){
                mn=min(mn,prices[i]);
                maxprof=max(maxprof,prices[i]-mn);
                
            
      }
      return maxprof;
    }
};