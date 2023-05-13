#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        k = min(k, n - k);
        for (int &i : a)
        {
            cin >> i;
        }
        sort(a, a + n);
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i >= k)
                cnt += a[i];
            else
                cnt -= a[i];
        }
        cout << cnt << endl;
    }
}