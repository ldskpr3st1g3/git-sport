class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ones = 0;
        int twos = 0;
        for(const auto &elem : nums)
        {
            ones ^= (elem & ~twos);
            twos ^= (elem & ~ones);
        }
        return ones;
    }
};
