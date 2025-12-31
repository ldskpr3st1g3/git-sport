class Solution {
public:

    void dfs(const auto& grid, auto& visited, int v, int e, int& counter)
    {
        visited[v][e] = 1;
        counter += 4;
        vector<int> dv{1,-1,0,0};
        vector<int> de{0,0,1,-1};
        for(int i{0}; i < 4; ++i)
        {
            int tv = dv[i]+ v;
            int te = e + de[i];
            if(0<=tv && tv < grid.size() && 0 <= te && te < grid[0].size())
            {
                if(grid[tv][te]) --counter;
                if(grid[tv][te] && !visited[tv][te]) dfs(grid, visited, tv,te, counter);
            }
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m , 0));
        int counter = 0;
        for(int i{0}; i< n;++i)
        {
            for(int j{0}; j < m;++j)
            {
                if(grid[i][j] && !visited[i][j]){ dfs(grid, visited, i, j,counter); break;}
                
            }
        }
        return counter;
    }
};
