constexpr const int INF = (int)1e9;
class Solution {
public:

    void dijkstra(auto& graph, auto& dists, int start)
    {
        dists[start] = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> q;
        q.push({0, start});
        while(!q.empty())
        {
            auto [nearest_dist, nearest] = q.top();
            q.pop();
            if(dists[nearest] != nearest_dist) continue;
            for(const auto& [to, dist]: graph[nearest])
            {
                if(dists[to] > dists[nearest] + dist)
                {
                    dists[to] = dists[nearest] + dist;
                    q.push({dists[to], to});
                }
            }
        }
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<vector<pair<int,int>>> graph(n);
        for(auto&& vec : std::move(times))
        {
            graph[vec[0] -1 ].push_back({vec[1]-1, vec[2]});
        }
        vector<int> dists(n, INF);
        dijkstra(graph, dists, --k);
        int result = *max_element(dists.begin(), dists.end());
        return result == INF ? -1 : result;
    }
};
