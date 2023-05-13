#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, cnt;
vector<int> adj[100005];
bool visited[100005];

void inp()
{
    cnt = 0;
    cin >> V >> E;
    memset(visited, 0, sizeof(visited));
    memset(adj, 0, sizeof(adj));
    while(E--)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void dfs(int s)
{
    stack<int> st;
    st.push(s);
    visited[s] = 1;
    while (!st.empty())
    {
        u = st.top();
        st.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = 1;
                st.push(u);
                st.push(v);
                break;
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
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;
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