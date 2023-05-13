#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    int ma = *max_element(a.begin(), a.end());
    int max_length = 1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == ma)
        {
            int l = 1;
            while (i + 1 < n && a[i + 1] == ma)
            {
                l++;
                i++;
            }
            max_length = max(max_length, l);
        }
    }
    cout << max_length;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testCase();
    return 0;
}