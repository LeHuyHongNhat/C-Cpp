#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, x, ans;
        cin >> n >> x;
        for (int i = 1; i <= n; ++i)
        {
            int num;
            cin >> num;
            if (num == x)
                ans = i;
        }
        cout << ans << endl;
    }
    return 0;
}