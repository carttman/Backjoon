#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> a(100, vector<int>(100, 0));
	while (n--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = y1; i <= y2; i++)
			for (int j = x1; j <= x2; j++)
				a[i - 1][j - 1]++;
	}

	int cnt = 0;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (a[i][j] > m)
				cnt++;

	cout << cnt;
	return 0;
}