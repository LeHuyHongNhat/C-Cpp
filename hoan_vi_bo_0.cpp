#include <bits/stdc++.h>

using namespace std;

void g_p(string s, string prefix, int n, int used[])
{
	if (prefix.length() == n){
		if(prefix[0] == '0'){
			int st = 0;
			while (prefix[st] == '0'){
				st++;
			}
			for(int i = st; i < n; i++){
				cout << prefix[i];
			}
			cout << endl;
		}
		else {
			cout << prefix << endl;
		}
	}
	for (int j = 0; j < n; j++)
	{
		if (!used[j])
		{
			if (j == 0 || s[j] != s[j - 1] || used[j - 1])
			{
				used[j] = 1;
				g_p(s, prefix + s[j], n, used);
				used[j] = 0;
			}
			
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		int n = s.length();
		int used[10] = {};
		bool z = false;
		g_p(s, "", n, used);
	}
	return 0;
}