vector<int> bfs(int n, vector<vector<int>>& adj, int start) {

    vector<int> visited(n,0);
    queue<int> q;

    q.push(start);
    visited[start] = 1;

    vector<int> result;

    while(!q.empty()) {

        int node = q.front();
        q.pop();

        result.push_back(node);

        for(int neighbor : adj[node]) {

            if(!visited[neighbor]) {

                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }

    return result;
}
