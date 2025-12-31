class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(const auto& row : matrix)
        {
            auto iter = lower_bound(row.begin(), row.end(), target);
            if(iter != row.end() && *iter == target) return true;
        }
        return false;
        
    }
};
