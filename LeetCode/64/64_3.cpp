class Solution {
public:
    void dinamic(const vector<vector<int>>& grid, vector<vector<int>>& dist) {
        dist[0][0] = grid[0][0];
        queue<pair<int, int>> q;
        q.push({0, 0});
        int n = grid.size();
        int m = grid[0].size();
        
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            
            if (x + 1 < n) {
                int newDist = dist[x][y] + grid[x + 1][y];  
                if (newDist < dist[x + 1][y]) {             
                    dist[x + 1][y] = newDist;
                    q.push({x + 1, y});
                }
            }
            
            if (y + 1 < m) {
                int newDist = dist[x][y] + grid[x][y + 1];  
                if (newDist < dist[x][y + 1]) {             
                    dist[x][y + 1] = newDist;
                    q.push({x, y + 1});
                }
            }
        }
    }

    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dist(grid.size(), vector<int>(grid[0].size(), INT_MAX));
        dinamic(grid, dist);
        return dist[grid.size() - 1][grid[0].size() - 1];
    }
};
