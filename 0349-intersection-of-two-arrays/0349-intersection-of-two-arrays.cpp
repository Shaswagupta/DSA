class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int>num3;
    vector <int> num4;
    int n1 = nums1.size();
    int n2 = nums2.size();
    
    int count = 0 ;
    for(int i = 0 ; i < n1 ; i++){
        num3.insert(nums1[i]);
    }
    for(int i = 0 ; i < n2 ; i++){
        num3.insert(nums2[i]);
    }
    for(int x : num3){
        if(find(nums1.begin(), nums1.end(), x) != nums1.end() &&
        find(nums2.begin(), nums2.end(), x) != nums2.end()){
            num4.push_back(x);
        }

    }



    return num4;}
};