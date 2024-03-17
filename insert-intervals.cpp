class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int len = intervals.size()+1;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(), [](const vector<int>& lhs, const vector<int>& rhs) {
            return lhs[0] < rhs[0];
        });
        vector<vector<int>>ans;
        int start, end;
        start = intervals[0][0];
        end = intervals[0][1];
        for(int i=1; i<len; i++)
        {
            cout << intervals[i][0] << " " << intervals[i][1] << " " << start << " " << end << endl;
            if(intervals[i][0]<=end) end = max(end, intervals[i][1]);
            else
            {
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start, end});
        return ans;
    }
};
