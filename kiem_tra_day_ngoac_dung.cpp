#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check(string s)
{
    int n = s.length();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else
        {
            if (st.empty())
            {
                return false;
            }
            char in = st.top(), out = s[i];
            if (in == '(' && out == ')')
                st.pop();
            else if (in == '[' && out == ']')
                st.pop();
            else if (in == '{' && out == '}')
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(check(s)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}