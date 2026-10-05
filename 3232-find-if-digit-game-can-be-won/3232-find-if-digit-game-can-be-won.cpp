class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n1 = 0, n2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 9) {
                n1 += nums[i];
            } else {
                n2 += nums[i];
            }
        }
        return n1 != n2;
    }
};