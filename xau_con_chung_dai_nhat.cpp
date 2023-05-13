#include <bits/stdc++.h>

using namespace std;

#define sz size()

void solve()
{
    string a, b;
    cin >> a >> b;

    int dp[a.sz + 1][b.sz + 1];
    for (int i = 0; i <= b.sz; ++i)
        dp[0][i] = 0;
    for (int i = 0; i <= a.sz; ++i)
        dp[i][0] = 0;

    for (int i = 0; i < a.sz; ++i)
    {
        for (int j = 0; j < b.sz; j++)
        {
            if (a[i] == b[j])
                dp[i + 1][j + 1] = dp[i][j] + 1;
            else
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
        }
    }
    cout << dp[a.sz][b.sz] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}