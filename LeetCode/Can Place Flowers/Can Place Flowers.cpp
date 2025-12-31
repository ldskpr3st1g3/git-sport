class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if(flowerbed.empty()) return false;
        if(n == 0) return true;
        for(size_t iter{0}; iter < flowerbed.size() && n !=0; ++iter)
        {
            bool left {flowerbed[iter] == 0 &&(iter == 0 || flowerbed[iter-1] == 0)};
            bool right {flowerbed[iter] == 0 && (iter == flowerbed.size()-1 || flowerbed[iter + 1] == 0)};
            if(left && right)
            {
                ++iter;
                --n;
            }
        }
        return n == 0;
    }
};
