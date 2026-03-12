#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> a;
vector<int> ans;
vector<int> vis;

void BFS(int node)
{
	queue<int> q;
	q.push(node);
	vis[node]++;

	while (!q.empty())
	{
		int nNode = q.front();
		q.pop();

		for (int i : a[nNode])
		{
			if (vis[i] == -1)
			{
				vis[i] = vis[nNode] + 1;
				q.push(i);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, k, x;
	cin >> n >> m >> k >> x;

	a.resize(n + 1);

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;

		a[s].push_back(e);
	}

	vis.resize(n + 1, -1);

	BFS(x);

	for (int i = 0; i <= n; i++)
		if (vis[i] == k)
			ans.push_back(i);

	if (ans.empty())
		cout << -1 << '\n';
	else
	{
		sort(ans.begin(), ans.end());
		for (int tmp : ans)
			cout << tmp << '\n';
	}

	return 0;
}