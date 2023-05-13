#include <iostream>

using namespace std;

int n, k, cnt;
int a[20], temp[20];
bool check;

void solve()
{
    cnt++;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != temp[i])
        {
            return;
        }
    }
    check = true;
}

void Try(int i)
{
    if (check == true)
    {
        return;
    }
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            solve();
        }
        else
            Try(i + 1);
    }
}

void testCase()
{
    check = false;
    cnt = 0;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> temp[i];
    }
    Try(1);
    cout << cnt;
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