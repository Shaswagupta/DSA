class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> answer(n);

        int pos = max_element(score.begin(), score.end()) - score.begin();
        answer[pos] = "Gold Medal";
        score[pos] = INT_MIN;

        if (n >= 2) {
            int secondPos = max_element(score.begin(), score.end()) - score.begin();
            answer[secondPos] = "Silver Medal";
            score[secondPos] = INT_MIN;
        }

        if (n >= 3) {
            int thirdPos = max_element(score.begin(), score.end()) - score.begin();
            answer[thirdPos] = "Bronze Medal";
            score[thirdPos] = INT_MIN;
        }

        for (int rank = 4; rank <= n; rank++) {
            pos = max_element(score.begin(), score.end()) - score.begin();

            answer[pos] = to_string(rank);
            score[pos] = INT_MIN;
        }

        return answer;
    }
};