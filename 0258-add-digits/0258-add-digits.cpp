class Solution {
public:
    int addDigits(int num) {

        int add = num;

        while (add >= 10) {

            int sum = 0;

            while (add > 0) {
                int b = add % 10;
                sum += b;
                add /= 10;
            }

            add = sum;
        }

        return add;
    }
};