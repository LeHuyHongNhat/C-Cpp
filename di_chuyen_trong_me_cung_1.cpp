#include <bits/stdc++.h>

using namespace std;

int n;
int a[11][11];
vector<string> paths;

void dfs(int x, int y, string path)
{
    if (x == n - 1 && y == n - 1)
    { // kiem tra vi tri cuoi
        paths.push_back(path);
    }
    if (x < n - 1 && a[x + 1][y] == 1)
    {
        dfs(x + 1, y, path + "D");
    }
    if (y < n - 1 && a[x][y + 1] == 1)
    {
        dfs(x, y + 1, path + "R");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        paths.clear();
        dfs(0, 0, "");
        if (paths.empty())
        {
            cout << -1 << endl;
        }
        else if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(paths.begin(), paths.end());
            for (auto i : paths)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}