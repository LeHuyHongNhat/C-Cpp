#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    // lưu trật tự các phần tử mảng ban đầu
    vector<int> idx(n); 
    for (int i = 0; i < n; ++i) {
        idx[i] = i;
    }
// sắp xếp các chỉ số của mảng a 
// theo thứ tự tăng dần của giá trị tại vị trí tương ứng trong mảng a
    sort(idx.begin(), idx.end(), [&](int i, int j) {
        if (a[i] == a[j]) return i < j;
        return a[i] < a[j];
    });

    vector<int> res; // lưu các giá trị thỏa mãn đk
    int max_idx = -1;
    for (int i = 0; i < n - 1; ++i) { // i < n - 1 để thỏa mãn điều kiện M < N
        max_idx = max(max_idx, idx[i]);
        if (max_idx == i) res.push_back(i + 1);
    }
    cout << res.size() << endl;
    for (auto i : res) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
// 5 
// 2 1 3 5 4 (1)
// 0 1 2 3 4 
// 1 0 2 4 3 (2) trật tự của (1) 
// 0 1 2 3   (3) i = 0_n - 1
// 1 1 2 4   (4) max_idx hay max_(2)_(3)
// x 2 3 x -> 2 3

