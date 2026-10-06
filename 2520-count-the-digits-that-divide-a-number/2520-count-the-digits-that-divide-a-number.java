class Solution {
    public int countDigits(int num) {
        int count = 0;
        int temp = num;
        while (num > 0) {
            int r = num % 10;
            if (temp % r == 0) {
                count += 1;
            }
            num = num / 10;
        }
        return count;
    }
}