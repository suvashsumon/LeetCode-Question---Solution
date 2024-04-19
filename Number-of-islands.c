class Solution {
public:
    void visit(vector<vector<char>>& grid, vector<vector<int>>& isVisited, int r, int c, int row, int col)
    {
        isVisited[r][c] = true;
        // left
        if(c>0 && isVisited[r][c-1]==false && grid[r][c-1]=='1') visit(grid, isVisited, r, c-1, row, col);
        // right
        if(c<col-1 && isVisited[r][c+1]==false && grid[r][c+1]=='1') visit(grid, isVisited, r, c+1, row, col);
        // top
        if(r>0 && isVisited[r-1][c]==false && grid[r-1][c]=='1') visit(grid, isVisited, r-1, c, row, col);
        // bottom
        if(r<row-1 && isVisited[r+1][c]==false && grid[r+1][c]=='1') visit(grid, isVisited, r+1, c, row, col);

        // base case
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<int>temp(col, false);
        vector<vector<int>>isVisited(row, temp);
        int ans = 0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(isVisited[i][j]==false && grid[i][j]=='1')
                {
                    ans++;
                    visit(grid, isVisited, i, j, row, col);
                }
            }
        }
        return ans;
    }
};
