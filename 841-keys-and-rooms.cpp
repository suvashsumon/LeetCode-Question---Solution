class Solution {
public:
    void dfs(vector<vector<int>>&room, vector<bool>&visited, int node)
    {
        visited[node] = true;
        int len = room[node].size();
        for(int i=0; i<len; i++)
        {
            if(visited[room[node][i]]==false)
            {
                dfs(room, visited, room[node][i]);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int len = rooms.size();
        vector<bool>visited(len, false);
        dfs(rooms, visited, 0);
        for(int i=0; i<len; i++)
        {
            cout << visited[i] << endl;
            if(visited[i]==false) return false;
        }
        return true;
    }
};
