#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v(n);
    for(int &i : v){
        cin >> i;
    }
    for(int i = 0; i <n; i++){
        if(mp[v[i]] == 0){
            cout << v[i] << " ";
            mp[v[i]] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    testCase();
    cout << endl;

    return 0;
}