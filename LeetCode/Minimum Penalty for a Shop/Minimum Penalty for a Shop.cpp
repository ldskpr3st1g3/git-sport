#define all(x) std::begin(x), std::end(x)
class Solution {
public:
    int bestClosingTime(string customers) 
    {
    pair<int, int> minimum{0, 0};
    int prefix{};
    for(int i{0}; i < customers.size(); ++i)
    {
        prefix += customers[i] == 'Y' ? -1 : 1;
        if(prefix < minimum.second) minimum.second = prefix, minimum.first = i + 1;
    }
    return minimum.first;
        

    }
};
