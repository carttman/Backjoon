#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> Node;

vector<Node> Directions = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector<vector<char>> map(n, vector<char>(m, 'E'));
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	queue<Node> q;

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin >> map[i][j];

			if (map[i][j] == 'I')
			{
				q.push({i,j});
			}
		}
	}

	int cnt = 0;

	while (!q.empty())
	{
		Node tmp = q.front();

		q.pop();

		for (int i=0; i<4; i++)
		{
			int nRow = tmp.first + Directions[i].first;
			int nColumn = tmp.second + Directions[i].second;

			if (nRow >= 0 && nRow < n)
			{
				if (nColumn >= 0 && nColumn < m)
				{
					if (!visited[nRow][nColumn])
					{
						if (map[nRow][nColumn] != 'X')
						{
							if (map[nRow][nColumn] == 'P')
							{
								cnt++;
							}

							visited[nRow][nColumn] = true;

							q.push({nRow, nColumn});
						}
					}
				}
			}
		}
	}

	if (cnt == 0)
	{
		cout << "TT";
	}
	else
	{
		cout << cnt;
	}

	return 0;
}