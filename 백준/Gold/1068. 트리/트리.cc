#include <bits/stdc++.h>

using namespace std;

int n;
int dNode = 0;
int ans = 0;
vector<vector<int>> tree;
vector<bool> vis;

void DFS(int num)
{
	vis[num] = true;
	int cNode = 0;

	for (int i : tree[num])
	{
		if (!vis[i] && i != dNode)
		{
			cNode++;
			DFS(i);
		}
	}

	if (cNode == 0)
		ans++;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;

	tree.resize(n);
	vis.resize(n);

	int root = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (num == -1)
			root = i;
		else
		{
			tree[i].push_back(num);
			tree[num].push_back(i);
		}
	}

	cin >> dNode;

	if (dNode == root)
		cout << 0 << '\n';
	else
	{
		DFS(root);
		cout << ans << '\n';
	}

	return 0;
}