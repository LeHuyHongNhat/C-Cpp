#include <iostream>
#include <vector>

using namespace std;

int count = 0;

void findSubsequences(vector<int>& arr, int k, vector<int>& subset, int index, int sum) {
    if (sum == k) {
        count++;
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i] << " ";
        }
        cout << endl;
        return;
    }
    if (index == arr.size() || sum > k) {
        return;
    }
    findSubsequences(arr, k, subset, index + 1, sum);
    subset.push_back(arr[index]);
    findSubsequences(arr, k, subset, index + 1, sum + arr[index]);
    subset.pop_back();
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> subset;
    findSubsequences(arr, k, subset, 0, 0);
    cout << count << endl;
    return 0;
}

