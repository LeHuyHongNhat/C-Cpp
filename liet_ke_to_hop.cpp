#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a, b;

void solve(){
    for(int i = 1; i <= k; i++){
        cout << a[b[i]] << " ";
    }
    cout << endl;
}


void Try(int i)
{
    for (int j = b[i - 1] + 1; j <= n ; j++)
    {
        b[i] = j;
        if (i == k)
        {
            solve();
        }
        else
            Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    set<int> mySet;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mySet.insert(x);
    }
    a.push_back(-1);
    for (auto i : mySet){
        a.push_back(i);
    }
    n = mySet.size();
    b.resize(n + 1);
    for(int i = 0; i <= n; i++){
        b[i] = i;
    }
    Try(1);
    return 0;
}