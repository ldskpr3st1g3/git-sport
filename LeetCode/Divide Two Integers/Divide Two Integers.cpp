class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == divisor) return 1;
        int sign = (divisor < 0) ^ (dividend <0) ? -1 : 1;
        long long int ans{0};
        long long int d = llabs(static_cast<long long int>(dividend));
        long long int n = llabs(static_cast<long long int>(divisor));
        while( n <= d)
        {
            int count=0;
            while((n << (count + 1)) < d) ++count;
            d -= n<<count;
            ans += 1 << count;
        }
        return ans*sign;
    }
};
