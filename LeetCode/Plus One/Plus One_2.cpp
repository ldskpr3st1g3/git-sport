#define all(x) std::begin(x), std::end(x)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        reverse(all(digits));
        digits.push_back(0);
        int i{};
        digits[i]+=1;
        while(digits[i] > 9)
        {
            digits[i] = 0;
            digits[++i] +=1;
        }
        if(digits.back() == 0) digits.pop_back();
        reverse(all(digits));
        return digits;
    }
};
