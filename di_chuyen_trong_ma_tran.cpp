#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 105;

int T, M, N;
int A[MAX][MAX];
long long dp[MAX][MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T--)
    {
        cin >> M >> N;
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> A[i][j];
                dp[i][j] = 0;
            }
        }

        dp[0][0] = 1;
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                // cộng dồn tất cả các cách thỏa mãn vào ô cuối cùng
                if (i > 0)
                    dp[i][j] += dp[i - 1][j];
                if (j > 0)
                    dp[i][j] += dp[i][j - 1];
            }
        }

        cout << dp[M - 1][N - 1] << endl;
    }
    return 0;
}
