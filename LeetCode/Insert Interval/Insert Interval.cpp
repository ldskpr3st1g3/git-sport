class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        intervals.push_back(std::move(newInterval));
        vector<vector<int>> ans;
        int n = static_cast<int>(intervals.size());
        ans.reserve(n);
        sort(intervals.begin(), intervals.end(),[](const auto& left, const auto& right){return
        left[0] < right[0];});
        ans.push_back(intervals.front());
        for(int i{1}; i < n; ++i)
        {
            if(ans.back()[1] >= intervals[i][0]) ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            else ans.push_back(intervals[i]);
        }
        return ans;
    }
};
