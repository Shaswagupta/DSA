class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi = INT_MIN;
        if (nums.size() == 1)
            return 0;
        for (int i = 0; i + 1 < nums.size(); i++) {
            maxi = max(maxi, nums[i + 1] - nums[i]);
        }
        return maxi;
    }
};