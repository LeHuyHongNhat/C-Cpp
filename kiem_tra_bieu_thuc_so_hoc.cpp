#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ')')
            st.push(s[i]);
        else
        {
            bool check = false;
            while (!st.empty())
            {
                char c = st.top();
                st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                    check = true;
                if (c == '(')
                    break;
            }
            if (!check)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
}