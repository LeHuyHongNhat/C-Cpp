#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 15;
const int INF = 1e9;

int T, N;
int C[MAXN][MAXN];
int dp[1 << MAXN][MAXN];

int main() {
    cin >> T;
    while (T--) {
        cin >> N;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> C[i][j];
            }
        }

        memset(dp, INF, sizeof(dp));
        for (int i = 0; i < N; i++) {
            dp[1 << i][i] = C[i][i];
        }

        for (int S = 0; S < (1 << N); S++) {
            if (__builtin_popcount(S) == 1) {
                continue;
            }
            for (int i = 0; i < N; i++) {
                if ((S & (1 << i)) == 0) {
                    continue;
                }
                for (int j = 0; j < N; j++) {
                    if ((S & (1 << j)) == 0 || i == j) {
                        continue;
                    }
                    dp[S][i] = min(dp[S][i], dp[S ^ (1 << i)][j] + C[j][i]);
                }
            }
        }

        int ans = INF;
        for (int i = 0; i < N; i++) {
            ans = min(ans, dp[(1 << N) - 1][i]);
        }
        cout << ans << endl;
    }
    return 0;
}
