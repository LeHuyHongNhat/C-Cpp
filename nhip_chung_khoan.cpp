#include <iostream>
#include <stack>
using namespace std;

// A function to print the stock market rhythm for each day in an array
void printStockRhythm(int arr[], int n) {
  // A stack to store the indices of the elements for which we have to find the stock market rhythm
  stack<int> st;
  // An array to store the results
  int res[n];
  // Traverse the array from left to right
  for (int i = 0; i < n; i++) {
    // Pop and discard all the indices from the stack that have greater or equal value than the current element
    while (!st.empty() && arr[st.top()] >= arr[i]) {
      st.pop();
    }
    // If the stack is empty, it means there is no smaller element on the left, so store 1 as the result
    if (st.empty()) {
      res[i] = 1;
    }
    // Else, store the difference between the current index and the top index of the stack as the result
    else {
      res[i] = i - st.top();
    }
    // Push the current index to the stack
    st.push(i);
  }
  // Print the results
  for (int i = 0; i < n; i++) {
    cout << res[i] << " ";
  }
  cout << endl;
}

// Driver code
int main() {
  // Input number of test cases
  int t;
  cin >> t;
  // Loop for each test case
  while (t--) {
    // Input number of elements in the array
    int n;
    cin >> n;
    // Input array elements
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    // Output the stock market rhythm for each element in the array
    printStockRhythm(arr, n);
  }
  return 0;
}