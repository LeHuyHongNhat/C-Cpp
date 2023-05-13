#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
    {
        cin >> i;
    }
    sort(a, a + n);
    int maxP = max(max(a[0] * a[1], a[n - 1] * a[n - 2]), max(a[0] * a[1] * a[n - 1], a[n - 1] * a[n - 2] * a[n - 3]));
    cout << maxP << endl;
}