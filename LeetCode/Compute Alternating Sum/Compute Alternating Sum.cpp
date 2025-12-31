class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int temp = 0;
        for(int i{0}; i < nums.size(); ++i)
        {
            temp += ( i & 1 ? -1 * nums[i] : nums[i]);
        }
        return temp;
        
    }
};
