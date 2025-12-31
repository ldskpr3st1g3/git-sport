class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(const auto& elem  : nums)
        {
            ++m[elem];
        }
        return m.size() != nums.size();
    }
};
