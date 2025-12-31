class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int maxim = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        for(const auto &elem : candies)
        {
            ans.push_back((elem + extraCandies >= maxim ? true : false));
                
        }
        return ans;
    }
};
