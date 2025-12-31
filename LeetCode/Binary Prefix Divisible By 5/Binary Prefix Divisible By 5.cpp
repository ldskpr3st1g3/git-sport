class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums)
    {
        int temp = 0;
        vector<bool> res;
        for(const auto& elem : nums) 
        {
            temp = ((temp << 1) + elem) % 5;
            res.emplace_back(temp == 0);
        }
        return res;


        
    }
};
