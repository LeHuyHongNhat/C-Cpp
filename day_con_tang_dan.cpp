#include <bits/stdc++.h>

using namespace std;

int n;
int a[23] = {};
vector<string> v;
vector<int> tmp;

void insert()
{
    string s = "";
    for (int &i : tmp)
    {
        s += to_string(i) + ' ';
    }
    v.push_back(s);
}

void Try(int i)
{
    for (int j = i + 1; j <= n; j++)
    {
        if (a[j] > a[i])
        {
            tmp.push_back(a[j]);
            if (tmp.size() > 1)
                insert();
            Try(j);
            tmp.pop_back();
            ;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(0);
    sort(v.begin(), v.end());
    for (string &i : v)
    {
        cout << i << endl;
    }
    return 0;
}