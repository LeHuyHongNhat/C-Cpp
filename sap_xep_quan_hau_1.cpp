#include <iostream>

using namespace std;

const int MAX = 10;

int n, cnt, t;
bool col[MAX], diag1[MAX * 2], diag2[MAX * 2];

void solve(int y)
{
    if (y == n)
    {
        cnt++;
        return;
    }
    for (int x = 0; x < n; x++)
    {
        if (col[x] || diag1[x + y] || diag2[x - y + n - 1])
        {
            continue;
        }
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = true;
        solve(y + 1);
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = false;
    }
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        cnt = 0;
        solve(0);
        cout << cnt << endl;
    }
}