class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<int> s;
        for (int x : nums) {
            s.insert(x);
        }
        vector<int> ans;
        auto it = s.end();
        it--;
        int count = min(k, (int)s.size());
        for (int i = 0; i < count; i++) {
            ans.push_back(*it);
            it--;
        }
        return ans;
    }
};