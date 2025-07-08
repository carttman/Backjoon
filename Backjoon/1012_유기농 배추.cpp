#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> Node;

Node directions[4] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

int main()
{
	int t;
	cin >> t;

	int m, n, k;

	while (t--)
	{
		cin >> m >> n >> k;
		vector<vector<int>> myMap(n, vector<int>(m, 0));
		vector<vector<bool>> visited(n, vector<bool>(m, false));
		vector<Node> cabbages;
		queue<Node> q;

		for (int i=0; i<k; i++)
		{
			int r, c;
			cin >> c >> r;

			myMap[r][c] = 1;
			cabbages.push_back({r, c});
		}

		int cnt = 0;

		for (int i=0; i<cabbages.size(); i++)
		{
			int cabbageRow = cabbages[i].first;
			int cabbageColumn = cabbages[i].second;

			if (!visited[cabbageRow][cabbageColumn])
			{
				q.push({ cabbageRow, cabbageColumn});

				while (!q.empty())
				{
					Node temp = q.front();

					visited[temp.first][temp.second] = true;

					q.pop();

					for (int i = 0; i < 4; i++)
					{
						int nRow = temp.first + directions[i].first;
						int nColumn = temp.second + directions[i].second;

						if (nRow >= 0 && nRow < n && nColumn >= 0 && nColumn < m)
						{
							if (myMap[nRow][nColumn] == 1)
							{
								if (!visited[nRow][nColumn])
								{
									visited[nRow][nColumn] = true;
									q.push({ nRow, nColumn });
								}
							}
						}
					}
				}

				cnt++;
			}
		}

		cout << cnt << "\n";
	}
}