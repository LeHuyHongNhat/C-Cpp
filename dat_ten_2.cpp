#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[20];
// vector<int> a;

void solve(){
    // string s;
    for(int i = 1; i <= k; i++){
        cout << (char) (a[i] + 'A' - 1);
        // s.push_back(a[i] + 'A' - 1);
    }
    cout << endl;
    // cout << s << endl;
}

void Try(int i){
    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            solve();
        }
        else Try (i + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        // a.resize(k + 1, 0);
        Try(1);
        cout << endl;
    }
    return 0;
}