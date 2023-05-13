#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (auto &i : v)
        cin >> i;
    int i = 1;
    int count = 0;
    sort(v.begin(), v.end());
    while(i < n){
        count = lower_bound()
    }
    cout << count;
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