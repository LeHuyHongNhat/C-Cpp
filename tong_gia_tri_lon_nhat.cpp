#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 5005;
int dp[MAX];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = m; j >= x; j--) {
            dp[j] = max(dp[j], dp[j-x] + y);
        }
    }

    cout << dp[m] << endl;

    return 0;
}
