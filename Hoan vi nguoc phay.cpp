#include<iostream>
#include<cmath>
using namespace std;

void hoanViNguoc(int n, int *a) {
    int i = n-1;
    while (i > 0 && a[i-1] <= a[i])
        i--;
    if (i <= 0) {
        cout << "EASY" << endl;
        return;
    }
    int j = n-1;
    while (a[j] >= a[i-1])
        j--;
    swap(a[i-1], a[j]);
    int l = i, r = n-1;
    while (l < r) {
        swap(a[l], a[r]);
        l++;
        r--;
    }
    for (int k = 0; k < n; k++)
        cout << a[k];
    cout << ",";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = n-i;
        for (int i = 0; i < pow(2, n); i++) {
            hoanViNguoc(n, a);
        }
        cout << endl;
        delete[] a;
    }
    return 0;
}

