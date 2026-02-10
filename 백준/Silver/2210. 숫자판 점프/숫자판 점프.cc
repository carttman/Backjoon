#include <bits/stdc++.h>

using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
vector<vector<int>> a;
vector<bool> visited(1000000);
int ans = 0;

void DFS(int x, int y, int sum, int cnt)
{
	if (cnt == 5)
	{
		if (!visited[sum])
		{
			visited[sum] = true;
			ans++;
		}
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0)
		{
			if (nx < 5 && ny < 5)
				DFS(nx, ny, sum * 10 + a[nx][ny], cnt + 1);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	a.resize(5, vector<int>(5, 0));

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			DFS(i, j, a[i][j], 0);

	cout << ans;

	return 0;
}