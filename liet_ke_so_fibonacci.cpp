#include <iostream>
using namespace std;

const int MAX_N = 92;

long long fib[MAX_N + 1];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fib[1] = 1;
        fib[2] = 1;
        for (int i = 3; i <= MAX_N; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        int a, b;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            cout << fib[i] << " ";
        }
        cout << endl;
    }
    return 0;
}