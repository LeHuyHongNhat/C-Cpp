#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

long long p(long long n, long long k){
    if(k == 0) return 1;
    if(k == 1) return n;
    long long x = p(n, k / 2);
    long long y = (x * x) % MOD;
    if(k % 2 == 0) return y;
    return (n * y) % MOD; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        cout << p(n, k) << endl;
    }
}