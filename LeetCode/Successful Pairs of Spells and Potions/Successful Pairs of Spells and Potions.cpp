using LL = long long int;
class Solution {
int bin_search(const auto& potions, int spell, LL success)
{
    int left = 0;
    int right = potions.size();
    int mid;
    while(left < right)
    {
        mid = left + (right - left) /2;
        if(1LL * potions[mid] * spell < success)
        left = mid + 1;
        else right = mid;
    }
    return left;
}

public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int n = (int)potions.size();
        vector<int> vec;
        vec.reserve(n);
        for(const auto& spell : spells)
        {
            vec.emplace_back(n - bin_search(potions, spell, success));
        }
        return vec;
    }
};
