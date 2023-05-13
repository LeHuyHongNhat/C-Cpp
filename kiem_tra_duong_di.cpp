#include <bits/stdc++.h>

using namespace std;

int n, m, q;
bool chuaxet[1005];
vector<int> List[1005];

void DFS(int u)
{
    chuaxet[u] = false;
    for (int v : List[u])
    {
        if (chuaxet[v])
        {
            DFS(v);
        }
    }
}

int main()
{
    int t, u, x, y, i;
    cin >> t;
    while (t--)
    {
        memset(chuaxet, true, sizeof(chuaxet));
        for (int i = 0; i < 1005; i++)
        {
            List[i].clear();
        }
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        cin >> q;
        while (q--)
        {
            memset(chuaxet, true, sizeof(chuaxet));
            cin >> x >> y;
            DFS(x);
            if (chuaxet[y])
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}
