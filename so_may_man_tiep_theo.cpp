#include <bits/stdc++.h>
using namespace std;

bool la_so_may_man(int n) {
    while (n > 0) {
        int chu_so = n % 10;
        if (chu_so != 4 && chu_so != 7) return false;
        n /= 10;
    }
    return true;
}

int so_may_man_tiep_theo(int n) {
    n++;
    while (!la_so_may_man(n)) {
        n++;
    }
    return n;
}

int tong_so_may_man(int a, int b) {
    int tong = 0;
    for (int i = a; i <= b; i++) {
        tong += so_may_man_tiep_theo(i);
    }
    return tong;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << tong_so_may_man(a, b);
    return 0;
}