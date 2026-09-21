class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {

        sort(arr.begin(), arr.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        multiset<int> s(arr.begin(), arr.end());

        for(int x : arr) {

            if(s.find(x) == s.end())
                continue;

            s.erase(s.find(x));

            if(s.find(2 * x) == s.end())
                return false;

            s.erase(s.find(2 * x));
        }

        return true;
    }
};