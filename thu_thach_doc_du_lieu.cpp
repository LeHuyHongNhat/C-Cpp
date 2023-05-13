#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    bool first = true;
    long long max_num, min_num;
    while (getline(cin, line)) {
        long long num = stoll(line);
        if (first) {
            max_num = num;
            min_num = num;
            first = false;
        } else {
            max_num = max(max_num, num);
            min_num = min(min_num, num);
        }
    }
    cout << max_num << " " << min_num << endl;
    return 0;
}
