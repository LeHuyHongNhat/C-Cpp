#include <bits/stdc++.h>
using namespace std;

int n, m, u, v;

vector<int> adj[100005];
bool visited[100005];

void inp()
{
    cin >> n >> m;
    memset(visited, 0, sizeof(visited));
    memset(adj, 0, sizeof(adj));
    for (int i = 1; i <= m; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

void solve()
{
    dfs(1);
    for (int i = 2; i <= n; ++i)
    {
        if (!visited[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inp();
        solve();
    }
    return 0;
}