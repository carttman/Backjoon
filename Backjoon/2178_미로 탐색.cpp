#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> mymap(n, vector<int>(m, 0));

	for (int i=0; i<n; i++)
	{
		string s;
		cin >> s;

		for (int j=0; j<s.size(); j++)
		{
			int si = s[j] - '0';

			mymap[i][j] = si;
		}
	}

	vector<pair<int, int>> dir = {{1,0}, {-1,0}, {0,-1}, {0, 1}};
	vector<vector<bool>> visited(n, vector<bool>(m, false));

	queue<pair<int, int>> q;
	q.emplace(0,0);

	while (!q.empty())
	{
		auto current = q.front();
		int c_row = current.first;
		int c_col = current.second;

		q.pop();

		for (int i=0; i<4; i++)
		{
			int n_row = c_row + dir[i].first;
			int n_col = c_col + dir[i].second;

			if (n_row >= 0 && n_row < n && n_col >= 0 && n_col < m)
			{
				if (mymap[n_row][n_col] > 0)
				{
					if (!visited[n_row][n_col])
					{
						visited[n_row][n_col] = true;
						mymap[n_row][n_col] = mymap[c_row][c_col] + 1;
						q.emplace(n_row, n_col);
					}
				}
			}
		}
	}

	cout << mymap[n-1][m-1];
}