#include <bits/stdc++.h>

using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-';
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else if (s[i] == ')')
            {
                if (!st.empty())
                {
                    int j = st.top();
                    st.pop();
                    if (j = i - 1)
                    {
                        s.erase(i, 1);
                        s.erase(j, 1);
                        i -= 2;
                    }
                }
            }
        }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        cout << s << endl;
    }
    return 0;
}