class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string strss = "";

        for (int j = 0; j < strs[0].size(); j++) {
            
            char current = strs[0][j];

            for (int i = 1; i < strs.size(); i++) {
                
                if (j >= strs[i].size() || strs[i][j] != current) {
                    return strss;
                }
            }

            strss.push_back(current);
        }

        return strss;
    }
};