class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        int mx = 1162261467;
        return  n > 0 && (mx % n == 0) ;
    }
};
