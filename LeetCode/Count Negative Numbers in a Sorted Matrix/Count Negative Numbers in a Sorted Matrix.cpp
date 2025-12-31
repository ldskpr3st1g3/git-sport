class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = (int)grid.size();
        int i = 0;
        int counter = 0;
        int m = (int)grid[0].size()-1;
        while(m >= 0 && i < n)
        {
            if(grid[i][m] < 0) counter += n-i, --m;
            else ++i;
        }
        return counter;
        
        
    }
};
