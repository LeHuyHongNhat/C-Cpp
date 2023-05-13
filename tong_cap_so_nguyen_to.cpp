#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    vector<int> primes;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            primes.push_back(p);
        }
    }
    return primes;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> primes = sieve(n);
        int k = 0;
        int i = 0, j = primes.size() - 1;
        if (n == 4)
        {
            cout << 2 << " " << 2 << endl;
        }
        else
        {
            while (i < j)
            {
                if (primes[i] + primes[j] == n)
                {
                    k = 1;
                    break;
                }
                else if (primes[i] + primes[j] < n)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
            if (k == 1)
                cout << primes[i] << " " << primes[j] << endl;
            else
                cout << "-1" << endl;
        }
    }
}
