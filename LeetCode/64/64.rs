impl Solution {
    pub fn min_path_sum(grid: Vec<Vec<i32>>) -> i32 {
        let mut grid = grid;
        for i in (1..grid.len())
        {
            grid[i][0] += grid[i-1][0];
        }
        for j in (1..grid[0].len())
        {
            grid[0][j] += grid[0][j-1];
        }
        for i in (1..grid.len())
        {
            for j  in (1..grid[0].len())
            {
                grid[i][j] += grid[i-1][j].min(grid[i][j-1]);
            }
        }
        grid[grid.len()-1][grid[0].len()-1]
    }
}
