class Solution {
public:
    double average(vector<int>& salary) {
        int sum = accumulate(salary.begin(), salary.end(), 0);
        int mini = *min_element(salary.begin(), salary.end());
        int maxi = *max_element(salary.begin(), salary.end());
        sum = sum - (mini + maxi);
        return (double)sum / (salary.size() - 2);
    }
};