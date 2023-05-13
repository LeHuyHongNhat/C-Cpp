#include <bits/stdc++.h>

using namespace std;

int n, m, k;
vector<int> adj[305];
bool visited[305];

void input()
{
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
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
    dfs(k);
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            result.push_back(i);
        }
    }
    if (result.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(result.begin(), result.end());
        for (auto x : result)
        {
            cout << x << endl;
        }
    }
}

int main()
{
    input();
    solve();
    return 0;
}
