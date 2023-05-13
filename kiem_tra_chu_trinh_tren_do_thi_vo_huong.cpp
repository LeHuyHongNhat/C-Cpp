#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, pre, OK;
vector<int> adj[100005];
bool visited[100005];

void inp()
{
    OK = 0;
    cin >> V >> E;
    memset(visited, 0, sizeof(visited));
    memset(adj, 0, sizeof(adj));
    while (E--)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void bfs(int s)
{
    queue<pair<int, int>> q;
    q.push({s, 0});
    visited[s] = 1;

    while (!q.empty())
    {
        u = q.front().first;
        pre = q.front().second;
        q.pop();

        for (int v : adj[u])
        {
            if (visited[v] == 1 && v != pre)
            {
                OK = 1;
                return;
            }
            if (visited[v] == 0)
            {
                visited[v] = 1;
                q.push({v, u});
            }
        }
    }
}

void solve()
{
    for (int i = 1; i <= V; ++i)
    {
        if (!visited[i])
        {
            bfs(i);
        }
        if (OK){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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