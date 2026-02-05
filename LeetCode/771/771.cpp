class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st(jewels.begin(), jewels.end());
        return std::ranges::count_if(stones, [&st](const auto& chr){return st.contains(chr);});
    }
};
