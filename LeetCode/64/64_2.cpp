class Solution {
public:
    vector<vector<int>> dijkstra(const vector<vector<int>>& graph) {
        const int INF = INT_MAX;
        int n = graph.size();
        int m = graph[0].size();
        
        vector<vector<int>> dist(n, vector<int>(m, INF));
        dist[0][0] = graph[0][0];
        
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
        pq.push({graph[0][0], 0, 0});
        
        vector<pair<int, int>> dirs = {{1, 0}, {0, 1}};
        
        while (!pq.empty()) {
            auto [d, x, y] = pq.top();
            pq.pop();
            
            if (d != dist[x][y]) continue;
            
            for (auto& dir : dirs) {
                int nx = x + dir.first;
                int ny = y + dir.second;
                
                if (nx < n && ny < m) {
                    int newDist = d + graph[nx][ny];
                    if (newDist < dist[nx][ny]) {
                        dist[nx][ny] = newDist;
                        pq.push({newDist, nx, ny});
                    }
                }
            }
        }
        
        return dist;
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dist = dijkstra(grid);
        return dist[grid.size() - 1][grid[0].size() - 1];
    }
};
