#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[35];
vector<string> v, ans;
;

void print()
{
    for (int i = 1; i <= k; i++)
        cout << v[a[i] - 1] << " ";
    cout << endl;
}

void solve(int i)
{
    for (int j = a[i - 1] + 1; j <= v.size() - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            print();
        }
        else
            solve(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    string s;
    map<string, bool> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        m[s] = 1;
    }
    for (auto &i : m)
    {
        v.push_back(i.first);
    }
    solve(1);
}