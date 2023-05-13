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
        int res = 0; 
        queue<string> q;
        q.push("1");
        while (!q.empty())
        {
            string z = q.front();
            q.pop();
            res++;

            string x = z + "0";
            if (x.size() > s.size() || (x.size() == s.size() && x > s))
                break;
            q.push(x);

            x = z + "1";
            if (x.size() > s.size() || (x.size() == s.size() && x > s))
                break;
            q.push(x);
        }
        cout << res + q.size() << endl;
    }
    return 0;
}