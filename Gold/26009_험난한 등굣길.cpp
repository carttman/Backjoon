#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> mymap(n, vector<int>(m, 0));
	vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

	int k;
	cin >> k;

	queue<tuple<int, int, int>> traffic_q;

	for (int i=0; i<k; i++) 
	{
		int r, c, d;
		cin >> r >> c >> d;

		mymap[r-1][c-1] = -1;

		if (!d)
			continue;

		traffic_q.emplace(r-1, c-1, d);
	}

	while (!traffic_q.empty())
	{
		auto curr_node = traffic_q.front();
		int c_row = get<0>(curr_node);
		int c_col = get<1>(curr_node);
		int traffic_count = get<2>(curr_node);

		traffic_q.pop();

		if (!traffic_count)
			continue;

		for (int i=0; i<4; i++)
		{
			int n_row = c_row + dir[i].first;
			int n_col = c_col + dir[i].second;

			if (n_row >= 0 && n_row < n && n_col >= 0 && n_col < m)
			{
				if (!mymap[n_row][n_col])
				{
					
				mymap[n_row][n_col] = - 1;

				traffic_q.emplace(n_row, n_col, traffic_count - 1);
				}
			}
		}
	}

	queue<pair<int, int>> q;
	q.emplace(0, 0);

	while (!q.empty())
	{
		auto curr_node = q.front();
		int c_row = curr_node.first;
		int c_col = curr_node.second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int n_row = c_row + dir[i].first;
			int n_col = c_col + dir[i].second;

			if (n_row >= 0 && n_row < n && n_col >= 0 && n_col < m)
			{
				if (mymap[n_row][n_col] >= 0)
				{
					if (!mymap[n_row][n_col])
					{
						mymap[n_row][n_col] = mymap[c_row][c_col] + 1;
						q.emplace(n_row, n_col);
					}
				}
			}
		}
	}

	if (mymap[n-1][m-1])
	{
		cout << "YES" << "\n";
		cout << mymap[n-1][m-1] << "\n";
	}
	else
	{
		cout << "NO" << "\n";
	}

	/*for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout << mymap[i][j] << " ";
		}
		cout << "\n";
	}*/

	return 0;
}