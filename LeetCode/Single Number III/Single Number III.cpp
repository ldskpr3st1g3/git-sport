class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        long long temp{0};
        for(const auto &elem : nums)
        {
            temp ^= elem;
        }   
        long long dif{temp & -temp};
        int a{0}, b{0};
        for(const auto &elem : nums)
        {
            (dif & elem ? a^=elem : b ^= elem);
        }
        return {a, b};
    }
};
