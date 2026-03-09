#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> ans;
vector<bool> vis;
vector<vector<int>> tree;

void DFS(int num)
{
	vis[num] = true;

	for (int i : tree[num])
	{
		if (!vis[i])
		{
			ans[i] = num;
			DFS(i);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;

	tree.resize(n + 1);
	ans.resize(n + 1);
	vis.resize(n + 1);

	for (int i = 1; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	DFS(1);

	for (int i = 2; i <= n; i++)
		cout << ans[i] << '\n';
	return 0;
}