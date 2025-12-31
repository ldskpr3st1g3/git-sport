class Solution {
public:
    int findClosest(int x, int y, int z) 
    {
        int first = abs(z - x);
        int second = abs(z - y);
        if(first == second )return 0;
        return first < second ? 1 : 2;   
    }
};
