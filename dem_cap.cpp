#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n, k;
    cin >> n >> k;
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        count += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
    }
    cout << count;
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