class Solution {
public:
    int minLengthAfterRemovals(string s) {
        return abs(count(s.begin(), s.end(), 'a') - count(s.begin(), s.end(), 'b'));
    }
};
