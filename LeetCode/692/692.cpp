class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> strings;
        for_each(words.begin(), words.end(),[&](const auto& elem){strings[elem]++;});
        auto cmp = [&](const auto& first, const auto& second){if(strings[first] == strings[second]) return first < second;
        else return strings[first] > strings[second];};
        vector<string> helper;
        for(const auto& [key, value] : strings) helper.emplace_back(key);
        sort(helper.begin(), helper.end(),cmp);
        vector<string> result;
        copy_n(helper.begin(), k, back_inserter(result));
        return result;
        
    }
};
