class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        int beg = nums[0];
        int en = *nums.rbegin();
        for(int i{beg}; i <= en; ++i)
            {
                if(!binary_search(nums.begin(), nums.end(), i)) temp.emplace_back(i);
            }
        return temp;
        
    }
};
