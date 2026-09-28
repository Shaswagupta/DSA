class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);

        for (int rank = 1; rank <= n; rank++) {
            int pos = max_element(score.begin(), score.end()) - score.begin();

            if (rank == 1)
                ans[pos] = "Gold Medal";
            else if (rank == 2)
                ans[pos] = "Silver Medal";
            else if (rank == 3)
                ans[pos] = "Bronze Medal";
            else
                ans[pos] = to_string(rank);

            score[pos] = INT_MIN;
        }

        return ans;
    }
};