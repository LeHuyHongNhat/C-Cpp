#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll const MOD = 1e9 + 7;

ll f[2][2], d[2][2];

void reset(){
    f[0][0] = f[0][1] = f[1][0] = 1; f[1][1] = 0;
    d[0][0] = d[0][1] = d[1][0] = 1; d[1][1] = 0;
}

void Mul(ll a[2][2], ll b[2][2]){
    ll x = (a[0][0] * b[0][0] % MOD + a[0][1] * b[1][0] % MOD) % MOD;
    ll y = (a[0][0] * b[0][1] % MOD + a[0][1] * b[1][1] % MOD) % MOD;
    ll z = (a[1][0] * b[0][0] % MOD + a[1][1] * b[1][0] % MOD) % MOD;
    ll t = (a[1][0] * b[0][1] % MOD + a[1][1] * b[1][1] % MOD) % MOD;
    f[0][0] = x, f[0][1] = y, f[1][0] = z, f[1][1] = t;
}

void Pow(ll f[2][2], int n){
    if(n <= 1) return;
    Pow(f, n / 2);
    Mul(f, f);
    if(n % 2 == 1){
        Mul(f, d);
    }
}

void result(){
    int n;
    cin >> n;
    reset();
    Pow(f, n - 1);
    cout << f[0][0] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        result();        
    }
    return 0;
}