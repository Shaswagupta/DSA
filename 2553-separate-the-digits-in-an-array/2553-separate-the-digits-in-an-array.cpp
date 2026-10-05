class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> nums2;

        int i = 0;

        while (i < nums.size()) {
            int temp = nums[i];
            vector<int> digits;

            while (temp > 0) {
                int r = temp % 10;
                digits.push_back(r);
                temp = temp / 10;
            }

            reverse(digits.begin(), digits.end());

            for (int x : digits) {
                nums2.push_back(x);
            }

            i++;
        }

        return nums2;
    }
};