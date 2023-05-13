#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    sort(v.begin(), v.end());
    int ans = 1e9;
    for (int i = 1; i < n; i++)
    {
        ans = min(ans, v[i] - v[i - 1]);
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}