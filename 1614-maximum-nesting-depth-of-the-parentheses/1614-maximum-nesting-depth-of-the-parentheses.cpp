class Solution {
public:
    int maxDepth(string s) {
        int count = 0, ans = 0, i = 0;
        while (i < s.size()) {
            if (s[i] == '(') {
                count++;
                
            }
            if (s[i] == ')') {
                count--;
                
            }
            ans = max(ans, count);
            i++;
        }
        return ans;
    }
};