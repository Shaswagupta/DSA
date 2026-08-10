class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xors = 0 ; 
        for (int i = 0 ; i <nums.size() ; i++ ){
            xors = xors^nums[i];
        }
    return xors;}
};