#include <bits/stdc++.h>

using namespace std;

bool next_permutation(int n, int a[]) {
    int i = n - 2;
    while (i >= 0 && a[i] >= a[i + 1]) {
        i--;
    }
    if (i == -1) {
        return false;
    }
    int j = n - 1;
    while (a[j] <= a[i]) {
        j--;
    }
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n);
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (next_permutation(n, a)) {
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}

