#include <bits/stdc++.h>
using namespace std;

int pascal(int n, int k) {
    if (n == 0 || k == 0 || n == k) {
        return 1;
    }
    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pascal(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
