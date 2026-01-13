class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> vec;
        vec.reserve(n);
        vec.push_back({});
        int p = 1 << n;
        vector<int> temp;
        temp.reserve(10);
        for(int i{1}; i< p; ++i)
        {
            temp.clear();
            for(int j{0}; j < n; ++j)
            {
                if(i & (1 << j))
                    temp.push_back(nums[j]);
            }
            vec.emplace_back(temp);
        }
        return vec;
    }
};
