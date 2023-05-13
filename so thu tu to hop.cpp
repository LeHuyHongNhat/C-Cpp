#include <bits/stdc++.h>
using namespace std;

int n, k, a[20];

int main() {
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }
    int rank = 1;
    do {
        bool flag = true;
        for (int i = 0; i < k - 1; i++) {
            if (a[i] > a[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag) break;
        rank++;
        next_permutation(a, a + k);
    } while (next_permutation(a, a + k));
    cout << rank << endl;
    return 0;
}

