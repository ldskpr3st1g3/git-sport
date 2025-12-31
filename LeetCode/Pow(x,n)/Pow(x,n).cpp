class Solution {
public:
    double myPow(double x, int n) 
    {
        if(n == INT_MIN) return (x == 1) ? 1 : (x == -1) ? 1 : 0;
        if(x == 1) return 1;
        if(n == 0) return 1;
        if(n < 0) return 1 / myPow(x, -n);
        double half = myPow(x, n/2);
        return (n & 1) ? x * half * half : half * half;
    }
};
