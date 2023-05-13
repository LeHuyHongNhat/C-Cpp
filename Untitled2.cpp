#include<bits/stdc++.h>
using namespace std;
int mtk[1000][1000];
int a[1000][2]={0};
vector<int> adj[1001];
bool check[1001];
void DFS(int u)
{
	cout << u << " ";
	check[u] = false;
	for (int v : adj[u])
	{
		if (check[v])
		{
			DFS(v);
		}
	}
}
int main()
{
	memset(check, true, sizeof(check));
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> mtk[i][j];
		}
	}
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			if (mtk[j][i] != mtk[i][j])
			{
				count++;
				break;
			}
		}
	}
	if (count == 0)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j++)
			{
				if (mtk[j][i] == 1)
				{
					adj[i].push_back(j);
					adj[j].push_back(i);
				}
			}
		}
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (mtk[i][j] == 1) {
					adj[i].push_back(j);
				}
			}
		}
	}
	DFS(1);
}
