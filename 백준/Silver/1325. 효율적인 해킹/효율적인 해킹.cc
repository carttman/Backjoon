#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> a;
vector<int> ans;
vector<bool> vis;

void bfs(int idx)
{
	queue<int> q;
	q.push(idx);

	vis[idx] = true;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int i : a[cur])
		{
			if (!vis[i])
			{
				vis[i] = true;
				ans[i]++;
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

	int n, m;
	cin >> n >> m;

	a.resize(n + 1);
	ans.resize(n + 1);

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;

		a[s].push_back(e);
	}

	vis.resize(n + 1);

	for (int i = 0; i <= n; i++)
	{
		fill(vis.begin(), vis.end(), false);
		bfs(i);
	}

	int mx = 0;

	for (int i = 1; i <= n; i++)
		mx = max(mx, ans[i]);

	for (int i = 1; i <= n; i++)
		if (ans[i] == mx)
			cout << i << ' ';
	

	return 0;
}