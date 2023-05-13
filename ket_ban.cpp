#include <bits/stdc++.h>
using namespace std;

int n, m, u, v, res;
vector<vector<int>> G;
bool visited[100000];

void inp()
{
    res = 0;
    cin >> n >> m;
    G.assign(n + 1, {});
    memset(visited, 0, sizeof(visited));
    for (int i = 1; i <= m; ++i)
    {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
}

void bfs(int s)
{
    int length = 1;
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (int v : G[u])
        {
            if (!visited[v])
            {
                length++;
                q.push(v);
                visited[v] = true;
            }
        }
    }
    res = max(res, length);
}

void solve()
{
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            bfs(i);
        }
    }
    cout << res << endl;
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