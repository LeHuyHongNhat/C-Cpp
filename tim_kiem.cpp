#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int &i : v)
        {
            cin >> i;
        }
        if (binary_search(v.begin(), v.end(), x))
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}