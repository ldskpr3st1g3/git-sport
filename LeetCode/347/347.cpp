class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;
        vector<pair<int,int>> vec;
        vec.reserve(nums.size());
        for(const auto& elem : nums)
        {
            ++mp[elem];
        }
        for(const auto& [key, value] : mp) vec.push_back({key, value});
        sort(vec.begin(),vec.end(),[](const auto& first, const auto& second){return first.second > second.second;});
        vector<int> result;
        for(int i{0}; i< k; ++i)
        {
            result.emplace_back(vec[i].first);
        }
        return result;
        
    }
};
