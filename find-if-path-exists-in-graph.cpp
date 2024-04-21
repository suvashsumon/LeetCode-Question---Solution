class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<bool>& isVisited, int source, int destination) {
        if (source == destination) return true;
        isVisited[source] = true;
        for (int i = 0; i < graph[source].size(); i++) {
            if (!isVisited[graph[source][i]]) {
                if (dfs(graph, isVisited, graph[source][i], destination)) {
                    return true; // if destination found, return true immediately
                }
            }
        }
        return false; // if destination not found in any adjacent nodes, return false
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for (int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<bool> isVisited(n, false);
        return dfs(graph, isVisited, source, destination);
    }
};
