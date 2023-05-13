#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n;
    cin >> n;
    int a[100005], l[100005] = {}, r[100005] = {};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > a[i - 1])
        {
            l[i] = l[i - 1] + 1;
        }
        else
            l[i] = 1;
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] > a[i + 1])
        {
            r[i] = r[i + 1] + 1;
        }
        else
            r[i] = 1;
    }
    int maxX = 0;
    for (int i = 1; i <= n; i++)
    {
        maxX = max(maxX, l[i] + r[i] - 1);
    }
    cout << maxX;
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
}