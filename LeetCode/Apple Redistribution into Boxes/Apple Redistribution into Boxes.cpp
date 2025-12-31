#define all(x) std::begin(x), std::end(x)
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(all(capacity), greater<int>());
        int apples = accumulate(all(apple),0);
        int start = 0;
        while(apples > 0)
        {
            apples -= capacity[start++];
        }
        return start;
    }
};
