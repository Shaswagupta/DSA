class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int, int> m;
        for (int x : nums) {
            m[x]++;
        }
        for (auto p : m) {
            if (p.second >= 2) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};