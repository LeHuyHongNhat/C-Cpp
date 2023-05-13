#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0)
            a.push_back(v[i]);
        else
            b.push_back(v[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int i = 0, j = 0;
    while (i < a.size() || j < b.size())
    {
        if (i < a.size())
            cout << a[i++] << " ";
        
        if (j < b.size())
            cout << b[j++] << " ";
    }
}

int main()
{
    testCase();
    cout << endl;
}