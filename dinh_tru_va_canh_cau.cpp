#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[10001];
bool visited[10001];
vector<pair<int, int>> ds_canh;

void input()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        ds_canh.push_back({x, y});
    }
}

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

void cut_vertex()
{
    int ans = 0;
    int connected_components = 0;
    memset(visited, 0, sizeof(visited));
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            connected_components++;
            dfs(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        memset(visited, 0, sizeof(visited));
        visited[i] = true;
        int cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            if (!visited[j])
            {
                cnt++;
                dfs(j);
            }
        }
        if (cnt > connected_components)
        {
            ans++;
        }
    }
    cout << ans << " ";
}

void dfss(int u, int s, int t)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if ((u == s and v == t) or (u == t and v == s))
            continue;
        if (!visited[v])
            dfss(v, s, t);
    }
}

void bridge()
{
    int anss = 0;
    int connected_componentss = 0;
    memset(visited, 0, sizeof(visited));
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            connected_componentss++;
            dfs(i);
        }
    }
    for (auto i : ds_canh)
    {
        int x = i.first, y = i.second;
        memset(visited, 0, sizeof(visited));
        int cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            if (!visited[j])
            {
                cnt++;
                dfss(j, x, y);
            }
        }
        if (cnt > connected_componentss)
            anss++;
    }
    cout << anss;
}

int main()
{
    input();
    cut_vertex();
    bridge();
    return 0;
}