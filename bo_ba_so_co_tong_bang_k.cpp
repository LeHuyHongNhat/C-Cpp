#include <bits/stdc++.h>

using namespace std;

void testC()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (binary_search(v.begin() + j + 1, v.end(), k - v[i] - v[j]))
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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
        testC();
    }
}