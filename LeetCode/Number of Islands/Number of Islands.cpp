class Solution {
public:

    void dfs(auto& grid, auto& visited, int v, int e)
    {
        visited[v][e] = 1;
        static vector<int> dv {1,-1, 0 , 0};
        static vector<int> de {0,0,1,-1};
        for(int i{0}; i < 4; ++i)
        {
            int tv = v + dv[i];
            int te =e+ de[i];
            if(0<= tv && tv < grid.size() && 0 <= te && te < grid[0].size() && grid[tv][te] == '1' && !visited[tv][te]) dfs(grid, visited, tv, te);
        }

    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int ne = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(ne, 0));
        int counter = 0;
        for(int i{0}; i < n; ++i)
        {
            for(int j{0}; j < ne; ++j)
            {
                if(!visited[i][j] && grid[i][j] == '1')
                {
                    dfs(grid, visited, i, j);
                    ++counter;
                }
            }
        }
        return counter;
    }
};
