class Solution {
public:
    int solve(long long x)
    {
        long long  rev = x%10;
        x/=10;
        while(x!=0)
        {
            rev*=10; rev+=x%10;
            x/=10;
        }
        return rev;
    }
    bool isPalindrome(long long x) 
    {
        if(x < 0) return false;
        return (solve(x) == x ? true : false);
    }
};
