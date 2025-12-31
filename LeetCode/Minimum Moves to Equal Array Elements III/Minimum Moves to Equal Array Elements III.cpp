class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int counter = 0;
        int temp= *max_element(nums.begin(), nums.end());
        for_each(nums.begin(), nums.end(),[&](const auto& elem){counter += temp - elem;});
        return counter;
        
    }
};
