#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void multiply(long long F[2][2], long long M[2][2]) {
    long long x = (F[0][0] * M[0][0] + F[0][1] * M[1][0]) % MOD;
    long long y = (F[0][0] * M[0][1] + F[0][1] * M[1][1]) % MOD;
    long long z = (F[1][0] * M[0][0] + F[1][1] * M[1][0]) % MOD;
    long long w = (F[1][0] * M[0][1] + F[1][1] * M[1][1]) % MOD;
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(long long F[2][2], long long n) {
    if (n <= 1) return;
    long long M[2][2] = {{1, 1}, {1, 0}};
    power(F, n/2);
    multiply(F, F);
    if (n % 2) multiply(F, M);
}

long long fibonacci(long long n) {
    if (n == 0) return 0;
    long long F[2][2] = {{1, 1}, {1, 0}};
    power(F, n - 1);
    return F[0][0];
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        cout << fibonacci(n) << endl;
    }
    return 0;
}
