class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for_each(nums.begin(), nums.end(),[&ans](const auto&elem){ ans ^= elem;});
        return ans;
        
    }
};
