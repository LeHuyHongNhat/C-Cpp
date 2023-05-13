#include <iostream>

using namespace std;

int n, k;
int x[20];
bool check()
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (x[i] == 1)
			count++;
	}
	if (count == k)
		return true;
	else
		return false;
}
void init()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		x[i] = 0;
	}
}

bool finalCheck()
{
	for (int i = 1; i <= n; i++)
	{
		if (x[i] == 0)
			return false;
	}
	return true;
}

void display()
{
	for (int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << endl;
}

void genNext()
{
	int i = n;
	while (x[i] == 1)
	{
		x[i] = 0;
		i--;
	}
	x[i] = 1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		init();
		// display();
		while (!finalCheck())
		{
			genNext();
			if (check() == true)
				display();
		}
		cout << endl;
	}
}
