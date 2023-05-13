#include <iostream>
#include <vector>
using namespace std;

long long fibLen(int n)
{
    vector<long long> len(93);
    len[0] = 1;
    len[1] = 1;

    for (int i = 2; i < 93; i++)
    {
        len[i] = len[i - 2] + len[i - 1];
    }
    return len[n - 1];
}

char fibChar(int n, long long i)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';

    if (i <= fibLen(n - 2))
        return fibChar(n - 2, i);
    else
        return fibChar(n - 1, i - fibLen(n - 2));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long i;
        cin >> n >> i;
        cout << fibChar(n, i) << endl;
    }
    return 0;
}