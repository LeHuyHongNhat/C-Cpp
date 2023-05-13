#include <iostream>
#include <string>
using namespace std;

const int MAXN = 5005;

int n, q;
string s;
bool dp[MAXN][MAXN];

void init() {
    cin >> s;
    n = s.length();
    // Khởi tạo giá trị cơ sở
    for (int i = 1; i <= n; i++) {
        dp[i][i] = true;
        dp[i][i-1] = true;
    }
    // Tìm xâu đối xứng có độ dài lớn hơn 1
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i <= n-len+1; i++) {
            int j = i+len-1;
            if (s[i-1] == s[j-1]) {
                dp[i][j] = dp[i+1][j-1];
            } else {
                dp[i][j] = false;
            }
        }
    }
}

void query() {
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (dp[l][r]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    init();
    query();
    return 0;
}
