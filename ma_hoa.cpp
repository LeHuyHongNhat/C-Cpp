#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, result = "";
        getline(cin, s);

        int count = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                result += s[i - 1] + to_string(count);
                count = 1;
            }
        }
        result += s[s.length() - 1] + to_string(count); // last
        cout << result << endl;
    }
    return 0;
}
