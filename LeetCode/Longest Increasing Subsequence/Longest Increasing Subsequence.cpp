class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> vec;
        for(const auto& elem : nums)
        {
            auto iter= lower_bound(vec.begin(), vec.end(), elem);
            if(iter == vec.end())
            {
                vec.push_back(elem);
            }
            else *iter = elem;

        }
        return vec.size();
    }
};
