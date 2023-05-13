#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int &i : v)
		cin >> i;
	bool ok = false;
	int step = 0;
	while (!ok)
	{
		for (int i = 0; i < n; i++)
		{
			ok = true;
			for (int i = 0; i < n - 1; i++)
			{
				if (v[i] > v[i + 1])
				{
					swap(v[i], v[i + 1]);
					ok = false;
				}
			}
			if (!ok)
			{
				step++;
				cout << "Buoc " << step << ": ";
				for (int i : v)
				{
					cout << i << " ";
				}
				cout << endl;
			}
		}
	}
	return 0;
}