class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int countE = 0, countO = 0;

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 0) {
                countE++;
            }
            else {
                countO++;
            }
        }

        if (countE == nums1.size() || countO == nums1.size()) {
            return true;
        }

        return true;
    }
};