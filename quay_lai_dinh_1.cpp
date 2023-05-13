#include <bits/stdc++.h>

using namespace std;

int n, m, s = 1, t = 2;
int cnt = 0;
vector<int> adj[1005];
bool visited[1005];
int parents[1005];
bool checked[1005];

void input()
{
    cin >> n >> m;
    memset(visited, 0, sizeof(visited));
    memset(parents, 0, sizeof(parents));
    memset(adj, 0, sizeof(adj));
    memset(checked, 0, sizeof(checked));
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
        cout << "";
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
        for (int &x : paths)
        {
            checked[x] = true;
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        input();
        Path(s, t);
        Path(t, s);
        for (int i = 0; i <= n; i++)
        {
            if (checked[i])
                cnt++;
        }
        cout << cnt << endl;
    }
}