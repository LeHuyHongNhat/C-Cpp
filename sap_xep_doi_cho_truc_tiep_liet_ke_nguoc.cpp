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
        vector<int> v(n);
        for (int &i : v)
        {
            cin >> i;
        }
        int count = 0;
        vector<vector<int>> result;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] < v[i])
                    swap(v[j], v[i]);
            }
            result.push_back(v);
            count++;
        }
        for (int i = result.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << count-- << ": ";
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
}