#include <bits/stdc++.h>
using namespace std;

int n, ans;

void DFS(int step, int num) {
    if (step == n) {
        ans ++;
        cout << num << ", ";
        return;
    }

    DFS(step + 1, num * 10 + 6);
    DFS(step + 1, num * 10 + 8);
}

int main() {
    cin >> n;

    cout << "All two-digit lucky numbers with length " << n << ": ";
    DFS(0, 0);

    cout << endl << "Total number of lucky numbers found: " << ans << endl;
    return 0;
}

