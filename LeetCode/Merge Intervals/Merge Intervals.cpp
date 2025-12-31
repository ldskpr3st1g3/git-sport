class Solution {
public:

    
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        auto comp = [](const auto& vec1, const auto& vec2){return vec1[0] < vec2[0];};
        int n = static_cast<int>(intervals.size());
        if(n == 0) return {{}};
        vector<vector<int>> vec;
        vec.reserve(n);
        sort(begin(intervals), end(intervals), comp);
        vec.push_back(intervals.front());
        int temp = 0;
        for(int i{1}; i < n; ++i)
        {
            temp = vec.back()[1];
            if(temp >= intervals[i][0])
            {
                vec.back()[1] = max(vec.back()[1],intervals[i][1]);
            }
            else vec.push_back(intervals[i]);
        }
        return vec;

    }
};
