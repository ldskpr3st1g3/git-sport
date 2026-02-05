class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        auto view = std::views::zip(s1,s2) | std::views::filter([&](const auto& par){
            auto [left, right] = par;
            return left != right;
        });
        std::vector<pair<char,char>> vec(view.begin(), view.end());
        switch (vec.size())
        {
            case 0:
                return true;
                break;
            case 2:
                return vec[0].first == vec[1].second && vec[0].second == vec[1].first;
                break;
            default: return false;

        }
        return false;
    }
};
