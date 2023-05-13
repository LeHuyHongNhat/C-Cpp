#include <bits/stdc++.h>

using namespace std;

void testCase(){
    int n, ok = 0, x;
    cin >> n;
    map<int, int> a;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= n ; i++)
    {
        if (a[i] == 0)
        {
            cout << i << endl;
            return;
        }
    }
    cout << n + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
    cout << endl;
}
