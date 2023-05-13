#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int find_subarray(int N, int K, const vector<int> &A)
{
    int min_len = N + 1;
    for (int i = 0; i < N; i++)
    {
        int g = A[i], len = 1;
        for (int j = i + 1; j < N; j++)
        {
            g = gcd(g, A[j]);
            len++;
            if (g == K)
            {
                min_len = min(min_len, len);
                break;
            }
        }
    }
    if (min_len == N + 1)
    {
        return -1;
    }
    else
    {
        return min_len;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int ans = find_subarray(N, K, A);
        cout << ans << endl;
    }
    return 0;
}
