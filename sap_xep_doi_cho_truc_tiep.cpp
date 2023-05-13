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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[i])
                swap(v[j], v[i]);
        }
        cout << "Buoc " + to_string(i + 1) + ": ";
        for(int k = 0; k < n; k++){
            cout << v[k] << " ";
        }
        cout << endl;
    }
}