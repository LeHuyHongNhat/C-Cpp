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
        int res = 1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                res = -1;
                cnt = i;
            }
        }
        if (res == -1)
        {
            cout << cnt + 1 << endl;
        }
        else
            cout << "NO" << endl;
    }
}