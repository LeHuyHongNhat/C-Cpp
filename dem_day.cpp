#include <bits/stdc++.h>

using namespace std;

const int MOD = 123456789;

long long power2(long long k, long long n)
{
    if (n == 0)
        return 1;
    long long x = power2(k, n / 2);

    if (n % 2 == 0)
        return (x * x) % MOD;
    return (k * ((x * x) % MOD)) % MOD;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << power2(2, n - 1) << endl;
    }
}