void dfs(int node, vector<vector<int>>& adj, vector<int>& visited) {

    visited[node] = 1;

    for(int neighbor : adj[node]) {

        if(!visited[neighbor])
            dfs(neighbor, adj, visited);
    }
}
