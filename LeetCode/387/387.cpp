class Solution {
public:
    int firstUniqChar(string s) {
        array<int, 26> helper;
        std::fill(helper.begin(),helper.end(), 0);
        for(const auto& elem : s)
        {
            helper[elem - 'a'] +=1;
        }
        auto view = s | std::views::enumerate | std::views::filter([&](const auto& par)
        {
            auto [index, elem] = par;
            return helper[elem -'a'] == 1;
        });

        std::vector<pair<int,int>> vec(view.begin(), view.end());
        return vec.empty() ? -1 : vec[0].first;
    }
};
