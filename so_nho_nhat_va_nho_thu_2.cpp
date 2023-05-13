#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        vector<int> v(s.begin(), s.end());
        if (v.size() == 1)
            cout << -1;
        else
            cout << v[0] << " " << v[1];
        cout << endl;
    }
}