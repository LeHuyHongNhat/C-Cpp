#include <bits/stdc++.h>

using namespace std;

int n, m, u; // sửa lại k thành u
vector<int> adj[1005];
bool visited[1005];

void inp()
{
    for (int i = 0; i < 1005; i++)
    {
        adj[i].clear();
    }
    cin >> n >> m >> u; // sửa lại k thành u
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, 0, sizeof(visited));
}

void dfs(int u)
{
    cout << u << " ";
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inp();
        dfs(u); // sửa lại k thành u
        cout << endl;
    }
}