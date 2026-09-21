class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxValue = *max_element(nums.begin(), nums.end());
        int index = max_element(nums.begin(), nums.end()) - nums.begin();
        for (int i = 0; i < nums.size(); i++) {
            if (i == index) {

            } else if (2 * nums[i] > maxValue) {
                return -1;
            }
        }
        return index;
    }
};