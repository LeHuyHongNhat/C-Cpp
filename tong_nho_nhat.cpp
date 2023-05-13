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
        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        long long x = 0, y = 0;
        for(int i = 0; i < n; i++){
            x = x * 10 + a[i]; 
            i++; 
            if(i != n)
            y = y * 10 + a[i];
        }
        cout << x + y << endl;
    }
}