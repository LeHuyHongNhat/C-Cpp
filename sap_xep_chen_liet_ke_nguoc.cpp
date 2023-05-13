#include <bits/stdc++.h>

using namespace std;

int main()
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
    for (int i = 0; i < n; ++i)
    {
        int key = v[i];
        int j = i;
        while (j > 0 && v[j - 1] > key)
        {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = key;
        vector<int> temp(v.begin(), v.begin() + i + 1);
        result.push_back(temp);
    }
    for (int i = result.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i << ": ";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}