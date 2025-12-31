using LL = long long int;
class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        LL sum = accumulate(nums.begin(), nums.end(), 0LL);
        LL left = 0;
        for(int i{0}; i < nums.size(); ++i)
        {
            if(left == sum - left -nums[i])
            return i;
            left+=nums[i];
        }
        return -1;
    }
};
