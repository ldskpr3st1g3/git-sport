class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        set<int> res;
        for(const auto &elem : nums)
        {
            auto [iter , is_ins] = res.insert(elem);
            if(!is_ins) return elem;
        }
        return -1;
    }
};
