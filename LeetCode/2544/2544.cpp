class Solution {
public:
    int alternateDigitSum(int n) 
    {
        int divisor = 1;
        while(divisor * 1LL * 10 <= n) divisor *= 10;
        int summary = 0;
        int sign = 1;
        while(divisor)
        {
            summary += (n/(divisor)) * sign;
            n = n%divisor;
            divisor/=10;
            sign = sign * -1;
        }
        return summary;
    }
};
