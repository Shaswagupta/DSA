class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, k = 0, l = 0;
        vector<int> even;
        vector<int> odd;
        while (i < n) {
            if (nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
            i++;
        }
        while (j < n) {
            if (j % 2 == 0) {
                nums[j] = even[l];
                l++;
            } else {
                nums[j] = odd[k];
                k++;
            }
            j++;
        }
        return nums;
    }
};