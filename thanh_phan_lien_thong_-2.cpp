#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20005;
int n, m;
vector<int> adj[MAXN];
bool visited[MAXN];

void input() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

int dfs(int u, int k) {
    visited[u] = true;
    int cnt = 1;
    for (int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i];
        if (!visited[v] && v != k) {
            cnt += dfs(v, k);
        }
    }
    return cnt;
}

void solve() {
    for (int k = 1; k <= n; k++) {
        memset(visited, false, sizeof(visited));
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (!visited[i] && i != k) {
                cnt++;
                dfs(i, k);
            }
        }
        cout << cnt << endl;
    }
}

int main() {
    input();
    solve();
    return 0;
}
