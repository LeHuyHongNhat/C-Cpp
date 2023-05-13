#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
void Result()
{
	cin >> n;
	vector<int> v(n);
	for (int &i : v)
		cin >> i;
	vector<int> v1 = v;
	sort(v.begin(), v.end());
	int i = 0, j = n - 1;
	while (v[i] == v1[i])
		i++;
	while (v[j] == v1[j])
		j--;
	cout << i + 1 << " " << j + 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		Result();
		cout << endl;
	}
}