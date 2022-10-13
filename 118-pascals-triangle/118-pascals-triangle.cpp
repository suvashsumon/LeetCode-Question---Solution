class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>temp;
        temp.push_back(1);
        ans.push_back(temp);
        for(int i=1; i<numRows; i++)
        {
            vector<int>pitem;
            for(int j=0; j<i+1; j++)
            {
                if(j==0 || j==i) pitem.push_back(1);
                else
                {
                    int a;
                    if(j-1<0) a = 0;
                    else a = ans[i-1][j-1];
                    pitem.push_back(a+ans[i-1][j]);
                }
            }
            ans.push_back(pitem);
        }
        return ans;
    }
};