#include <iostream>
#include <stack>
using namespace std;

int largestRectangleArea(int hist[], int n) {
  stack<int> st;
  int max_area = 0;
  int tp;
  int area_with_top;
  int i = 0;
  while (i < n) {
    if (st.empty() || hist[st.top()] <= hist[i]) {
      st.push(i++);
    }
    else {
      tp = st.top();
      st.pop();
      area_with_top = hist[tp] * (st.empty() ? i : i - st.top() - 1);
      max_area = max(max_area, area_with_top);
    }
  }
  while (!st.empty()) {
    tp = st.top();
    st.pop();
    area_with_top = hist[tp] * (st.empty() ? i : i - st.top() - 1);
    max_area = max(max_area, area_with_top);
  }
  return max_area;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int hist[n];
    for (int i = 0; i < n; i++) {
      cin >> hist[i];
    }
    cout << largestRectangleArea(hist, n) << endl;
  }
  return 0;
}