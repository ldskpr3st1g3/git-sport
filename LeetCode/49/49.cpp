
#define all(x) begin(x) , end(x)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for(auto&& word : std::move(strs))
        {
            string temp = word;
            sort(all(temp));
            hash[temp].emplace_back(word);
            
        }
        vector<vector<string>> result;
        result.reserve(hash.size());
        for(auto&& [key, value] : std::move(hash))
        {
            result.emplace_back(value);
        }
        return result;
    }
};
