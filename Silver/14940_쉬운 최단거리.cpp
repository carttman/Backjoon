#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> Node;
vector<Node> Dir = {{-1, 0}, {1, 0}, {0,-1}, {0, 1}};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector<vector<int>> myMap(n, vector<int>(m, 0));
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	queue<Node> q;

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin >> myMap[i][j];

			if (myMap[i][j] == 2)
			{
				q.push({i,j});
				myMap[i][j] = 0;
			}
		}
	}

	while (!q.empty())
	{
		Node curr = q.front();

		q.pop();

		for (int i=0; i<4; i++)
		{
			int nRow = curr.first + Dir[i].first;
			int nCol = curr.second + Dir[i].second;

			if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m)
			{
				if (myMap[nRow][nCol] >= 1)
				{
					if (!visited[nRow][nCol])
					{
						visited[nRow][nCol] = true;

						myMap[nRow][nCol] = myMap[curr.first][curr.second] + 1;
						q.push({nRow, nCol});
					}
				}
			}
		}
	}

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			if (!visited[i][j] && myMap[i][j] == 1)
			{
				myMap[i][j] = -1;
			}

			cout << myMap[i][j] << " ";
		}
		cout << "\n";
	}
}