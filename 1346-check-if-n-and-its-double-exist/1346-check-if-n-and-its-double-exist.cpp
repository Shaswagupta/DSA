class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       for (int i = 0; i < arr.size(); i++) {
        int elem = 2* arr[i];
        for (int j = 0; j < arr.size(); j++) {
            if (elem  == arr[j] && i != j ){
                return true ;
            }
        }
       } 
    return false;}
};