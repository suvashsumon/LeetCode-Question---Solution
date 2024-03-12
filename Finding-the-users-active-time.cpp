class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int , set<int>>mp;
        int len = logs.size();
        for(int i=0; i<len; i++) mp[logs[i][0]].insert(logs[i][1]); // id -> {, , }
        vector<int>ans(k, 0);
        set<int>temp;
        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
            temp = i->second;
            int k = temp.size();
            ans[k-1]++;
        }
        return ans;
    }
};
