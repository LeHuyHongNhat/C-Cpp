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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int &i : a)
            cin >> i;
        for (int &i : b)
            cin >> i;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout <<(long long) a[n - 1] * b[0] << endl;
    }
}