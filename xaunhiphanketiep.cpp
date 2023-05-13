#include <bits/stdc++.h>
using namespace std;

int T, len;
string bin;

int main() {
    cin >> T;
    while (T--) {
        cin >> bin;
        len = bin.length();
        int i = len - 1;
        while (i >= 0 && bin[i] == '1') {
            bin[i] = '0';
            i--;
        }
        if (i >= 0) {
            bin[i] = '1';
        }
        cout << bin << endl;
    }
    return 0;
}
