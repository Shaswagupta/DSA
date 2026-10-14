class Solution {
public:
    bool detectCapitalUse(string word) {
        int u = 0;
        for (char ch : word) {
            if (isupper(ch)) {
                u++;
            }
        }
        return u == word.size() || u == 0 || u == 1 && isupper(word[0]);
    }
};