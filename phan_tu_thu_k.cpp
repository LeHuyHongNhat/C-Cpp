#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> c(n + m);
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }
        for(int i = n; i < n + m; i++){
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        cout << c[k - 1] << endl;
    }
}