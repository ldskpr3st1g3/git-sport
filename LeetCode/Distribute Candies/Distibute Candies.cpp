class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int target = candyType.size() /2;
        unordered_set<int> st;
        for_each(candyType.begin(), candyType.end(),[&](const int dig){st.insert(dig);});
        return min(static_cast<int>(st.size()), target);
        
    }
};
