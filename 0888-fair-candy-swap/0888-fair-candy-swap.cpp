class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int aliceTotal = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int bobTotal = accumulate(bobSizes.begin(), bobSizes.end(), 0);

        int diff = (aliceTotal - bobTotal)/2;
        for( int x : aliceSizes){
            for( int y : bobSizes){
                if(x-y == diff){
                    return {x,y};
                }
            }
        }
    return {} ;}
};