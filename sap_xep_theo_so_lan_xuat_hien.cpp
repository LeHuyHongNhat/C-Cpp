#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            map<int, int> mp;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                mp[x]++;
            }
            vector<pair<int, int>> v(mp.begin(), mp.end());
            sort(v.begin(), v.end(), cmp);
            for (auto it : v)
            {
                for (int j = 0; j < it.second; j++)
                {
                    cout << it.first << " ";
                }
            }
            cout << endl;
        }
    }
}
