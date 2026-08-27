class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> h1;
        int count = 0;
        h1 = h;
        sort(h1.begin(), h1.end());
        for (int i = 0; i < h.size() ; i++){
            if(h[i] != h1[i]){
                count +=1;
            }
        }
    return count ;}
};