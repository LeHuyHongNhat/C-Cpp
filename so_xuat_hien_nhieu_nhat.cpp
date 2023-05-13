#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n;
    cin >> n;
    map<int, int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    for (auto i : v)
    {
        if (i.second > n / 2)
        {
            cout << i.first;
            return;
        }
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}