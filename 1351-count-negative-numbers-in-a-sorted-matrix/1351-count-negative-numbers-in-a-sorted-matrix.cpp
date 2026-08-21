class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n1 = grid.size(), n2 = grid[0].size();

        int count = 0;
        for (int i = 0; i < n1 * n2; i++) {
            if (grid[i / n2][i % n2] < 0) {
                count += 1;
            }
        }
    return count ;}
};
