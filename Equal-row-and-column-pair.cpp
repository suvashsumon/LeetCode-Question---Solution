class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int cnt = 0;
        int len = grid[0].size();
        cout << "len : " << len << endl;
        vector<int>row;
        for(int i=0; i<len; i++)
        {
            row = grid[i];
            for(int c=0; c<len; c++)
            {
                bool flag = true;
                for(int r=0; r<len; r++)
                {
                    if(grid[r][c]!=row[r])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag == true) cnt++;
            }
        }
        return cnt;
    }
};
