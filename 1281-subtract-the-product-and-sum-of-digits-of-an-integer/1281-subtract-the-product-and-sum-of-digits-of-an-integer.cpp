class Solution {
public:
    int subtractProductAndSum(int n) {
        int add = 0, pro = 1;
        while (n > 0) {
            int r = n % 10;
            add += r;
            pro *= r;
            n = n / 10;
        }
        return pro - add;
    }
};