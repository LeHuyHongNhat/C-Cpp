#include <bits/stdc++.h>

using namespace std;

int a[11];
vector<vector<int>> res;

void findS(int i, int n, int k, vector<int> cur)
{
    if (i == n)
    {
        if (k == 0)
        {
            res.push_back(cur);
        }
        return;
    }
    if (k < 0)
    {
        return;
    }
    findS(i + 1, n, k, cur); // not choose a[i]
    cur.push_back(a[i]);
    findS(i + 1, n, k - a[i], cur); // choose a[i]
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
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        res.clear();
        vector<int> cur;
        findS(0, n, k, cur);
        if (res.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(res.begin(), res.end());
            for (auto v : res)
            {
                cout << "[";
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i];
                    if (i != v.size() - 1)
                    {
                        cout << " ";
                    }
                }
                cout << "] ";
            }
            cout << endl;
        }
    }
    return 0;
}