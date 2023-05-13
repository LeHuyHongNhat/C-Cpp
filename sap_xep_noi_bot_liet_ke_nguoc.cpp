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
            cin >> i;
        vector<vector<int>> result;
        for (int i = 1; i < n; i++)
        {
            bool ok = true;
            for (int j = 0; j < n - 1; j++)
            {
                if (v[j] > v[j + 1])
                {
                    swap(v[j], v[j + 1]);
                    ok = false;
                }
            }
            if (ok == true)
            {
                break;
            }
            result.push_back(v);
        }
        for (int i = result.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}