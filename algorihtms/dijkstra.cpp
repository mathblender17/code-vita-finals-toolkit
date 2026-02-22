vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& adj, int start) {

    vector<int> dist(n, INT_MAX);

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    dist[start] = 0;
    pq.push({0,start});

    while(!pq.empty()) {

        auto [d,node] = pq.top();
        pq.pop();

        for(auto [neighbor,weight] : adj[node]) {

            if(dist[node] + weight < dist[neighbor]) {

                dist[neighbor] = dist[node] + weight;
                pq.push({dist[neighbor], neighbor});
            }
        }
    }

    return dist;
}
