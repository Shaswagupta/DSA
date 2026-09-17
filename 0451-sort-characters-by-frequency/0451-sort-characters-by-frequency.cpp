class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char i : s) {
            mp[i]++;
        }
        vector<pair<char, int>> v;

        for (auto x : mp) {
            v.push_back(x);
        }
        sort(v.begin(), v.end(),
             [](auto& a, auto& b) { return a.second > b.second; });
        string ans = "";

        for (auto x : v) {
            ans += string(x.second, x.first);
        }
        return ans;
    }
};