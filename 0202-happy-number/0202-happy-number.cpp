class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1) {
            if (seen.count(n)) {
                return false;
            }

            seen.insert(n);

            long long add = 0;

            while (n > 0) {
                int r = n % 10;
                n = n / 10;
                add += r * r;
            }

            n = add;
        }

        return true;
    }
};