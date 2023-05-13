#include <bits/stdc++.h>

using namespace std;

int n, m, s, t;
vector<int> adj[1005];
bool visited[1005];
int parents[1005];

void input()
{
    cin >> n >> m >> s >> t;
    memset(visited, 0, sizeof(visited));
    memset(parents, 0, sizeof(parents));
    memset(adj, 0, sizeof(adj));
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        // adj[y].push_back(x);
    }
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int x : adj[v])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                parents[x] = v;
            }
        }
    }
}

void Path(int s, int t)
{
    bfs(s);
    if (!visited[t])
    {
        cout << -1;
    }
    else
    {
        vector<int> paths;
        while (t != s)
        {
            paths.push_back(t);
            t = parents[t];
        }
        paths.push_back(t);
        reverse(paths.begin(), paths.end());
        for (int &x : paths)
        {
            cout << x << " ";
        }
    }
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        input();
        Path(s, t);
    }
}