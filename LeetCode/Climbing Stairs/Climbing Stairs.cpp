class Solution {
public:
    int climbStairs(int n) 
    {
         if(n == 1 || n ==0 || n == 2) return n;
         long long int x = 2;
         long long int y = 1;
         int temp;
         for(long long i{3} ; i <= n;++i)
         {
            temp = x + y;
            y = x;
            x = temp;
         }  
         return x;
    }
};
