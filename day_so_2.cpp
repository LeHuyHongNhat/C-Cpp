#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> v;
vector<int> a;
vector<int> b;

void Try(int i)
{
    v.push_back(a);
    if (i == 1)
    {
        return;
    }
    for (int j = 0; j < i - 1; j++)
    {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    a.resize(i - 1);
    b.clear();
    Try(i - 1);
}

void testCase()
{
    cin >> n;
    a.resize(n);
    v.clear();
    for (int &i : a)
    {
        cin >> i;
    }
    Try(n);
    reverse(v.begin(), v.end());
    for (auto i : v)
    {
        cout << "[";
        for (int j = 0; j < i.size(); j++)
        {
            cout << i[j];
            if (j != i.size() - 1)
            {
                cout << " ";
            }
        }
        cout << "] ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}