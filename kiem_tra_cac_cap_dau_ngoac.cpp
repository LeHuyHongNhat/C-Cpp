#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ')' and !st.empty() and s[st.top()] == '(')
                st.pop();
            else if (s[i] == ']' and !st.empty() and s[st.top()] == '[')
                st.pop();
            else if (s[i] == '}' and !st.empty() and s[st.top()] == '{')
                st.pop();
            else
                st.push(i);
        }
        if (!st.empty())
            cout << "false" << endl;
        else
            cout << "true" << endl;
    }
}