#include <bits/stdc++.h>
using namespace std;

int count(int x, int y[], int n) {
    int it = upper_bound(y, y + n, pow(x, 1.0 / x)) - y;
    int ans = n - it;
    if (x == 0) {
        return ans;
    }
    else if (x == 1) {
        return ans + 1;
    }
    else {
        return ans;
    }
}

void testCase() {
    int n, m;
    cin >> n >> m;
    int x[n], y[m], ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> y[i];
    }
    sort(y, y + m);
    for (int i = 0; i < n; i++) {
        ans += count(x[i], y, m);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
