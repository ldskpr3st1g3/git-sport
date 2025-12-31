class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<bool> vec(nums.size(), 0);
        vector<int> res;
        res.reserve(nums.size()/2);
        for(const auto& elem : nums)
        {
            if(vec[elem-1]) res.push_back(elem);
            else vec[elem-1] = 1;
        }
        return res;
    
    }
};
