class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        std::vector<int> cloned = nums;
        int len = nums.size();
        for(int i{0}; i < len;++i)
        {
            cloned[i] = nums[(((i + nums[i]) % len) + len) % len];
        }
        return cloned;
    }
};
