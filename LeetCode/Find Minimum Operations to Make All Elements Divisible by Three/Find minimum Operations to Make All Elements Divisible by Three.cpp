class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        return count_if(nums.begin(), nums.end(),[&](const auto& elem){return elem % 3 != 0;});
    }
};
