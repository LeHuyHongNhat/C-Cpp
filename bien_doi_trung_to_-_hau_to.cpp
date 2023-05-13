#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOperand(char c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int precedence(char op) {
  if (op == '^') return 3;
  if (op == '*' || op == '/') return 2;
  if (op == '+' || op == '-') return 1;
  return -1;
}

string convertToPostfix(string expr) {
  stack<char> st;
  string res = "";
  for (int i = 0; i < expr.length(); i++) {
    if (isOperand(expr[i])) {
      res += expr[i];
    }
    else if (expr[i] == '(') {
      st.push(expr[i]);
    }
    else if (expr[i] == ')') {
      while (!st.empty() && st.top() != '(') {
        res += st.top();
        st.pop();
      }
      if (!st.empty()) {
        st.pop();
      }
    }
    else {
      while (!st.empty() && precedence(st.top()) >= precedence(expr[i])) {
        res += st.top();
        st.pop();
      }
      st.push(expr[i]);
    }
  }
  while (!st.empty()) {
    if (st.top() == '(') {
      st.pop();
      continue;
    }
    res += st.top();
    st.pop();
  }
  return res;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string expr;
    cin >> expr;
    cout << convertToPostfix(expr) << endl;
  }
  return 0;
}