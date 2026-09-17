class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;
        int i = 0;
        while (i < s.size()) {
            string a = s.substr(0, i);
            string b = s.substr(i);

            if (goal ==  b + a ) {
                return true;
            }
            i++;
        }
        return false;
    }
};