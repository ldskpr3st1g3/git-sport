#define all(x) std::begin(x), std::end(x)
class Solution {
public:
    string toLowerCase(string s) {
        for_each(all(s),[](auto& elem){ elem = tolower(elem);});
        return s;
    }
};
