class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  smaller = INT_MAX  ,  k= 0 ; 
        for(int i = 0 ; i < prices.size(); i++){
            
                smaller = min(smaller, prices[i]);
                k = max(k,prices[i] - smaller);
            
            
        }
        
        
    return k ;}
};