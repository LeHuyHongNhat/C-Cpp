#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long K = v[i] * v[i] + v[j] * v[j];
            long long k = sqrt(K);
            if (k*k == K && binary_search(v.begin() + j + 1, v.end(), k))
            {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}