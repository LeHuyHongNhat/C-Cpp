#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S, M;
        cin >> N >> S >> M;
        if (S < 7)
        {
            if (M > N)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << (M * S + N - 1) / N << endl;
            }
        }
        else
        {
            if (M >= N || 6 * (N - M) < M)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << (M * S + N - 1) / N << endl;
            }
        }
    }

    return 0;
}
