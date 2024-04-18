class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]==1)
                {
                    ans+=4;
                    // left check
                    if(j-1>=0 && grid[i][j-1]==1) ans--;
                    //right check
                    if(j+1<col && grid[i][j+1]==1) ans--;
                    // top check
                    if(i-1>=0 && grid[i-1][j]==1) ans--;
                    // bottom check
                    if(i+1<row && grid[i+1][j]==1) ans--; 
                }
            }
        }
        return ans;
    }
};
