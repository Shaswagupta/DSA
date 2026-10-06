class Solution {
public:
    int minElement(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int temp = nums[i];
            while (temp > 0) {
                int r = temp % 10;
                count += r;
                temp = temp / 10;
            }
            nums[i] = count;
        }
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};