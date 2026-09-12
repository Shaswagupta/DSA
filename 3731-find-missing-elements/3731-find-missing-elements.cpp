class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int minii = *min_element(nums.begin(), nums.end());
        int maxii = *max_element(nums.begin(), nums.end());
        vector<int > ans;
        for (int i = minii ; i <=  maxii ; i ++ ){
            if(find(nums.begin(), nums.end(), i) != nums.end()){

            }
            else {
                ans.push_back(i);
            }
        }
    return ans;}
};