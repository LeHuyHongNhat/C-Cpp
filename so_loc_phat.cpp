#include <bits/stdc++.h>
using namespace std;
#define int long long

int dp[20][2][8][5];
// Dp[i][isLower][mod8][numOf68]: số lượng số có i chữ số,
// các chữ số đó còn lại bé hơn hoặc bằng số tương ứng ở dãy N, 
// chia hết cho 8 với phần dư là mod8 và có numOf68 cặp số (6,8)

int getNumOf68(int x) {
    int res = 0;
    while (x > 0) {
        if (x % 10 == 6 || x % 10 == 8) {
            res++;
        }
        x /= 10;
    }
    return res;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = to_string(n);
        int len = s.length();
        memset(dp, 0, sizeof(dp));
        dp[0][1][0][0] = 1;
        for (int i = 0; i < len; i++) {
            for (int isLower = 0; isLower <= 1; isLower++) {
                for (int mod8 = 0; mod8 < 8; mod8++) {
                    for (int numOf68 = 0; numOf68 <= 4; numOf68++) {
                        if (dp[i][isLower][mod8][numOf68] == 0) {
                            continue;
                        }
                        int limit = isLower ? 9 : s[i] - '0';
                        for (int digit = 0; digit <= limit; digit++) {
                            int newMod8 = (mod8 * 10 + digit) % 8;
                            int newNumOf68 = numOf68 + (digit == 6 || digit == 8);
                            dp[i+1][isLower || (digit < limit)][newMod8][newNumOf68] += dp[i][isLower][mod8][numOf68];
                        }
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 0; i <= 4; i++) {
            ans += dp[len][0][0][i] + dp[len][1][0][i];
        }
        cout << ans << endl;
    }
    return 0;
}
