#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n; ++i) {
        int key = arr[i];
        int j = i;
        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
        cout << "Buoc " << i << ": ";
        for (int k = 0; k <= i; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    return 0;
}
