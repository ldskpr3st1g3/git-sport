class Solution {
public:
    int fib(int n) 
    {
        if(n == 0 || n == 1) return n;
     int a{0}, b{1};
     int temp;
     for(int i{0}; i < n-1; ++i)
     {
        temp = a + b;
        a = b;
        b = temp;
     }   
     return temp;
    }
};
