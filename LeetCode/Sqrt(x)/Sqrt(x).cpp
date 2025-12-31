class Solution {
public:
    int mySqrt(int x) 
    {
        if(x == 0 || x == 1) return x;
        for(int i{1}; i < 46340 + 1; ++i)
        {
            if(i * i > x)
                return i-1;
        }
        return 46340;
    }
};
