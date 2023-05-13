#include <bits/stdc++.h>
using namespace std;

int T, n, X;
int A[1000005];

bool cmp(int a, int b) {
    return abs(a - X) < abs(b - X);
}

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> X;
        for (int i = 0; i < n; i++) cin >> A[i];
        stable_sort(A, A + n, cmp);
        for (int i = 0; i < n; i++) cout << A[i] << " ";
        cout << endl;
    }
    return 0;
}

