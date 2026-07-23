class Solution {
public:
    bool isPalindrome(long x) {
        if (x < 0) {
            return false;
        }
        long temp = x;
        long rev = 0;

        while (temp > 0) {
            long digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }
        return rev == x;
    }
};