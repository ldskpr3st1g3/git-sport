class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n = nums.size();
        int p = 1 << n;
        vector<vector<int>> result;
        result.reserve(n);
        vector<int> temp;
        temp.reserve(10);
        for(int i{0} ;i< p; ++i)
        {
            temp.clear();
            for(int j{0}; j < n; ++j)
            {
                if(i & (1 << j))
                    temp.emplace_back(nums[j]);
            }   result.emplace_back(temp);
        }  
        return result;
    }
};
