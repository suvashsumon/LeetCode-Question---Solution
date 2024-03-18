class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int len = points.size();
        //int start = points[0][0];
        sort(points.begin(), points.end());
        int end = points[0][1];
        int cnt = 0;
        //for(int i=0; i<len; i++) cout << points[i][0] << " " << points[i][1] << endl;
        for(int i=1; i<len; i++)
        {
            //cout << end << endl;
            if(points[i][0]<=end)
            {
                end = min(end, points[i][1]);
            }
            else
            {
                cnt++;
                //start = points[i][0];
                end = points[i][1];
            }
        }
        cnt++;
        return cnt;
    }
};
