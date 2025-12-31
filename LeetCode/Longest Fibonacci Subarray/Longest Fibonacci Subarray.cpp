class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 2;
        int temp = 2;
        for(int i{2}; i < nums.size(); ++i)
            {
                if(nums[i-1] + nums[i-2] == nums[i]) ++temp;
                else ans = max(ans, temp), temp = 2;
            }
        ans = max(ans, temp), temp = 2;
        return ans;
        
    }
};
