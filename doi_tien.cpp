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
        int n;
        cin >> n;
        int cnt = 0;
        vector<int> money = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        for (int m : money)
        {
            cnt += n / m;
            n %= m;
        }
        cout << cnt << endl;
    }
}