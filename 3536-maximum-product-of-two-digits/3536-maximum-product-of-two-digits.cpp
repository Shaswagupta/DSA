class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        
      while (n > 0){
        int s = n % 10 ;
        ans.push_back(s);
        n = n/10;
      }
       int num = ans.size();
      sort(ans.begin(), ans.end());
    return ans[num-1]*ans[num-2] ;}
};