#include<bits/stdc++.h>

using namespace std;

string v[55];

void prepare(){
    v[1] = 'A';
    v[2] = 'B';
    for(int i = 3; i < 55; i++){
        v[i] = v[i - 1] + v[i - 2];
    }
}

void solve(){
    long long n, k;
    cin >> n >> k;
    string x = v[n];
    cout << x[k];
}
int main(){
    prepare();
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}