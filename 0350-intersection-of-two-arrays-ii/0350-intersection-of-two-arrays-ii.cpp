class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for (int i = 0; i < nums1.size(); i++) {
            int x = nums1[i];

            auto it = find(nums2.begin(), nums2.end(), x);

            if (it != nums2.end()) {
                nums3.push_back(x);
                nums2.erase(it);
            }
        }
        return nums3;
    }
};