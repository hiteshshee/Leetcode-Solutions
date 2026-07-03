class Solution {
public:
    bool check(int x, vector<vector<pair<int,int>>> &adj, vector<bool> &online, long long k, vector<int> &topo) {
        int n = online.size();

        vector<long long> dp(n, 4e18);
        dp[0] = 0;

        for (int idx = 0; idx < topo.size(); idx++) {
            int i = topo[idx];

            if (dp[i] == 4e18)
                continue;

            if (i != 0 && i != n - 1 && online[i] == false)
                continue;

            for (int j = 0; j < adj[i].size(); j++) {
                int v = adj[i][j].first;
                int w = adj[i][j].second;

                if (w < x)
                    continue;

                if (v != n - 1 && online[v] == false)
                    continue;

                dp[v] = min(dp[v], dp[i] + w);
            }
        }

        return dp[n - 1] <= k;
    }

    int findMaxPathScore(vector<vector<int>> &edges, vector<bool> &online, long long k) {
        int n = online.size();

        vector<vector<pair<int,int>>> adj(n);
        vector<int> indegree(n, 0);

        int high = 0;

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];

            adj[u].push_back({v, w});
            indegree[v]++;
            high = max(high, w);
        }

        queue<int> q;
        vector<int> topo;

        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            topo.push_back(u);

            for (int i = 0; i < adj[u].size(); i++) {
                int v = adj[u][i].first;
                indegree[v]--;

                if (indegree[v] == 0)
                    q.push(v);
            }
        }

        int low = 0;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(mid, adj, online, k, topo)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};