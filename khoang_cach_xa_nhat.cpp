#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> v[n];
        for(int i = 0; i < n; i++){
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v, v + n);
        int count = -1, min = v[0].second, k = v[0].first;
        for(int i = 0; i < n; i++){
            if(v[i].first > k){
                count = max(count, v[i].second - min);
            }
            if(min > v[i].second){
                min = v[i].second;
                k = v[i].first;
            }
        }
        cout << count << endl;
    }
}