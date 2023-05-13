#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin >> num;

    int n = num.length();
    int cnt = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (cnt == 3) {
            num.insert(i + 1, ",");
            cnt = 0;
        }
        cnt++;
    }

    cout << num << endl;

    return 0;
}
