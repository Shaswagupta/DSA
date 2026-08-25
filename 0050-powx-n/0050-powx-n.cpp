class Solution {
public:
    double myPow(double x, int n) {
        double z = 0 ;
        if (n >= 0 ){
            z = pow(x, n);
        }
        else if (n <0){
            long long nn = n;
            z = 1 / pow(x, abs(nn));
        }
        
    return z;}
};