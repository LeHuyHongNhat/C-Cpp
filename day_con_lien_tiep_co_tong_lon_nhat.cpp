#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans = 0, sum = 0;
        for(int &i : a){
            cin >> i; 
            sum = max(i, sum + i);
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
}