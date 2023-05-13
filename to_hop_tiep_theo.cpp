#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n, k;
    cin >> n >> k;
    int a[1000] = {};
    vector<int> v;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    int i = k;
    int count = 0;
    while (a[i] == n - k + i && i >= 1)
    {
        i--;
    }
    if (i == 0)
    {
        count = k;
    }
    else
    {
        int check = 0;
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for (int p = 1; p <= k; p++)
        {
            for (int q = 0; q < k; q++)
            {
                if (a[p] == v[q])
                {
                    check++;
                }
            }
        }
        count = k - check;
    }
    cout << count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
}