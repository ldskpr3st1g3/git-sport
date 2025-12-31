using LL = long long int;
#define all(x) std::begin(x), std::end(x)
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        LL result{};
        sort(all(happiness));
        int n = (int)happiness.size();
        for(int i{n-1}, counter{}; i >= 0 && k-->0; --i, ++counter)
        {
            int temp = happiness[i] - counter;
            if(temp <= 0) return result;
            result += temp;
        }
        return result;    
    }
};
