class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (target <= nums[i] && target > nums[i - 1]) {
                index = i;
            }
        }
        if (target > nums[nums.size() - 1]) {
            index = nums.size();
        }
        return index;
    }
};