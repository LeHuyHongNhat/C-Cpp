#include <iostream>
#include <stack>
using namespace std;

void printNGE(int arr[], int n) {
  stack<int> st;
  int res[n];
  for (int i = n - 1; i >= 0; i--) {
    while (!st.empty() && st.top() <= arr[i]) {
      st.pop();
    }
    if (st.empty()) {
      res[i] = -1;
    }
    else {
      res[i] = st.top();
    }
    st.push(arr[i]);
  }
  for (int i = 0; i < n; i++) {
    cout << res[i] << " ";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    printNGE(arr, n);
    cout << endl;
  }
  return 0;
}