#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOperand(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char changeSign(char c) {
  if (c == '+') return '-';
  if (c == '-') return '+';
  return c;
}

string removeParentheses(string expr) {
  stack<int> st;
  string res = "";
  for (int i = 0; i < expr.length(); i++) {
    if (expr[i] == '(') {
      st.push(i);
    }
    else if (expr[i] == ')') {
      if (st.empty()) {
        expr[i] = -1;
      }
      else {
        int top = st.top();
        st.pop();
        expr[top] = -1;
        expr[i] = -1;
        if (top > 0 && expr[top-1] == '-') {
          for (int j = top + 1; j < i; j++) {
            if (!isOperand(expr[j])) {
              expr[j] = changeSign(expr[j]);
            }
          }
        }
      }
    }
  }
  for (int i = 0; i < expr.length(); i++) {
    if (expr[i] != -1) {
      res += expr[i];
    }
  }
  return res;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string expr;
    cin >> expr;
    cout << removeParentheses(expr) << endl;
  }
  return 0;
}