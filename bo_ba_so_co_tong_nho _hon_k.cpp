#include <bits/stdc++.h>

using namespace std;

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
        long long v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v, v + n);
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long x = k - v[i] - v[j];
                count += lower_bound(v + j + 1, v + n, x) - (v + j + 1);
            }
        }
        cout << count << endl;
    }
}