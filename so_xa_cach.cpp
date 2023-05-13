#include <bits/stdc++.h>

using namespace std;

int n;
int a[11];

bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if ((i > 1 && abs(a[i] - a[i - 1]) == 1) || (i < n && abs(a[i] - a[i + 1]) == 1))
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++){
            a[i] = i;
        }
        do{
            if(check()){
                for(int i = 1; i <= n; i++){
                    cout << a[i];
                }
                cout << endl;
            }
        }while(next_permutation(a+1, a+n+1));
        cout << endl;
    }
}