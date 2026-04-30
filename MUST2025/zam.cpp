#include <bits/stdc++.h>
using namespace std;

const int INF = 100000;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj[i][j];

    int u, v, k;
    cin >> u >> v >> k;

    if (k == 0)
    {
        cout << (u == v ? 0 : INF) << "\n";
        return 0;
    }

    if (u == v)
    {
        cout << 0 << "\n";
        return 0;
    }

    for (int i = 0; i < n; i++)
        adj[i][i] = INF;

    if (n == 1)
    {
        cout << INF << "\n";
        return 0;
    }

    vector<vector<int>> dp = adj;

    for (int step = 2; step <= k; step++)
    {
        vector<vector<int>> ndp(n, vector<int>(n, INF));
        for (int a = 0; a < n; a++)
            for (int b = 0; b < n; b++)
                for (int w = 0; w < n; w++)
                {
                    if (dp[a][w] >= INF || adj[w][b] >= INF)
                        continue;
                    int cand = dp[a][w] + adj[w][b];
                    if (cand < ndp[a][b])
                        ndp[a][b] = cand;
                }
        dp = ndp;
    }

    int ans = dp[u][v];
    if (ans >= INF)
        ans = INF;
    cout << ans << "\n";
    return 0;
}