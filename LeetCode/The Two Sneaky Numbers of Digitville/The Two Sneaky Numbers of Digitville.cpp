class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> m;
        for_each(nums.begin(), nums.end(),[&](const auto& elem){++m[elem];});
        vector<int> ans;
        ans.reserve(2);
        for( auto &&elem : m)
        {
            if(elem.second == 2) ans.push_back(std::move(elem.first));
        }
        return ans;
        
    }
};
