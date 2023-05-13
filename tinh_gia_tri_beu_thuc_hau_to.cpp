#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOperator(char c) {
  return (c == '+' || c == '-' || c == '*' || c == '/');
}

int operation(int a, int b, char op) {
  switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default: return 0;
  }
}

int evaluatePostfix(string expr) {
  stack<int> st;
  for (int i = 0; i < expr.length(); i++) {
    if (isdigit(expr[i])) {
      st.push(expr[i] - '0');
    }
    else if (isOperator(expr[i])) {
      int a = st.top(); st.pop();
      int b = st.top(); st.pop();
      int res = operation(b, a, expr[i]);
      st.push(res);
    }
  }
  return st.top();
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string expr;
    cin >> expr;
    cout << evaluatePostfix(expr) << endl;
  }
  return 0;
}