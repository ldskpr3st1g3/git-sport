class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        const int x = *max_element(nums.begin(),nums.end());
        if(x <= 0) return x;
        int temp = 0;
        int res = 0;
        for(const auto elem : nums)
        {
            temp+=elem;
            res = res > temp ? res : temp;
            if(temp <= 0) temp = 0;       
        }
        return res;
    }
};
