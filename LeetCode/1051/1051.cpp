class Solution {
public:
    int heightChecker(vector<int>& heights) {
        auto temp = heights;
        std::ranges::sort(temp);
        return std::ranges::count_if(
            std::views::zip(heights, temp),
            [](const auto& par){
                auto[first, second] = par;
                return first != second;
            }
        );
        
    }
};
