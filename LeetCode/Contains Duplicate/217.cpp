class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for(const auto& elem : nums)
        {
            auto [iter, flag] = hash.insert(elem);
            if(!flag) return true;
        }
        return false;
    }
};
