#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;

int parent[MAXN];
int rank[MAXN];

struct Edge {
    int u, v, w;
};

bool cmp(const Edge& a, const Edge& b) {
    return a.w < b.w;
}

int find(int u) {
    if (parent[u] != u) {
        parent[u] = find(parent[u]);
    }
    return parent[u];
}

void merge(int u, int v) {
    u = find(u);
    v = find(v);
    if (rank[u] < rank[v]) {
        parent[u] = v;
    } else if (rank[u] > rank[v]) {
        parent[v] = u;
    } else {
        parent[u] = v;
        rank[v]++;
    }
}

int kruskal(vector<Edge>& edges, int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }

    sort(edges.begin(), edges.end(), cmp);

    int ans = 0;
    for (Edge e : edges) {
        int u = e.u, v = e.v, w = e.w;
        if (find(u) != find(v)) {
            merge(u, v);
            ans += w;
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<Edge> edges(m);
        for (int i = 0; i < m; i++) {
            cin >> edges[i].u >> edges[i].v >> edges[i].w;
        }

        int ans = kruskal(edges, n);
        cout << ans << endl;
    }

    return 0;
}
