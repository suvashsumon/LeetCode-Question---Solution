class Solution {
public:
    int solver(vector<vector<int>>& grid, vector<vector<bool>>& isVisited, int row, int col) {
        // Base case: if the cell is 0 or already visited
        if (grid[row][col] == 0 || isVisited[row][col]) return 0;

        // Mark the cell as visited
        isVisited[row][col] = true;

        // Collect the gold in the current cell
        int goldCollected = grid[row][col];

        // Explore all four directions
        int a = 0, b = 0, c = 0, d = 0;
        if (row - 1 >= 0) a = solver(grid, isVisited, row - 1, col);
        if (row + 1 < grid.size()) b = solver(grid, isVisited, row + 1, col);
        if (col - 1 >= 0) c = solver(grid, isVisited, row, col - 1);
        if (col + 1 < grid[0].size()) d = solver(grid, isVisited, row, col + 1);

        // Unmark the cell as visited to allow other paths to use it
        isVisited[row][col] = false;

        // Return the gold collected plus the maximum gold collected from the four directions
        return goldCollected + max(max(a, b), max(c, d));
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<bool>> isVisited(row, vector<bool>(col, false));
        int ans = 0;

        // Try to start collecting gold from every cell that is not 0
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (grid[i][j] != 0) {
                    ans = max(ans, solver(grid, isVisited, i, j));
                }
            }
        }

        return ans;
    }
};
