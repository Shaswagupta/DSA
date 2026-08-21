class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        int i = 1, j = 0;

        // Skip equal elements
        while (i < nums.size() && nums[i] == nums[j]) {
            i++;
            j++;
        }

        // All elements are equal
        if (i == nums.size()) {
            return true;
        }

        // Increasing
        if (nums[i] > nums[j]) {

            while (i < nums.size()) {

                if (nums[i] >= nums[j]) {
                    i++;
                    j++;
                }
                else {
                    return false;
                }
            }
        }

        // Decreasing
        else {

            while (i < nums.size()) {

                if (nums[i] <= nums[j]) {
                    i++;
                    j++;
                }
                else {
                    return false;
                }
            }
        }

        return true;
    }
};