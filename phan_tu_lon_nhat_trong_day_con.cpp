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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &i : v)
        {
            cin >> i;
        }
        for (int i = 0; i <= n - k; i++)
        {
            int max = 0;
            for (int j = i; j < i + k; j++)
            {
                if (v[j] > max)
                {
                    max = v[j];
                }
            }
            cout << max << " ";
        }
        cout << endl;
    }
}