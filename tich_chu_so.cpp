#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    long long p;
    cin >> p;
    if (p == 1)
    {
        cout << 1;
        return;
    }
    int sv[10] = {};
    for (int i = 9; i >= 2; --i)
    {
        while (p % i == 0)
        {
            p /= i;
            sv[i]++;
        }
    }
    if (p != 1)
    {
        cout << -1;
        return;
    }

    for (int i = 2; i <= 9; ++i)
    {
        for (int j = 1; j <= sv[i]; ++j)
        {
            cout << i;
        }
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
        testCase();
        cout << endl;
    }
    return 0;
}