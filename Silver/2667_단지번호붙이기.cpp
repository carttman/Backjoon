#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> Node;
vector<Node> Dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> map(n, vector<int>(n, 0));
	vector<vector<bool>> visited(n, vector<bool>(n, false));
	vector<Node> points;
	queue<Node> q;

	for (int i=0; i<n; i++)
	{
		string s;
		cin >> s;

		for (int j=0; j<n; j++)
		{
			map[i][j] = s[j] - '0';

			if (map[i][j] == 1)
				points.push_back({i, j});
		}
	}

	vector<int> danziCounts;
	int allDanzisCount = 0;

	for (int i=0; i<points.size(); i++)
	{
		int cr = points[i].first;
		int cc = points[i].second;

		
		if (!visited[cr][cc])
		{
			q.push({cr, cc});
			allDanzisCount++;
		}

		int currDanziCount = 0;

		while (!q.empty())
		{
			currDanziCount++;

			Node currNode = q.front();

			q.pop();

			visited[currNode.first][currNode.second] = true;

			for (int i = 0; i < 4; i++)
			{
				int nr = currNode.first + Dir[i].first;
				int nc = currNode.second + Dir[i].second;

				if (nr >= 0 && nr < n && nc >= 0 && nc < n)
				{
					if (!visited[nr][nc])
					{
						if (map[nr][nc] == 0)
							continue;

						visited[nr][nc] = true;
						q.push({ nr, nc });

					}
				}
			}
		}
		if (currDanziCount > 0)
		{
			danziCounts.push_back(currDanziCount);
		}
	}

	cout << allDanzisCount << "\n";

	sort(danziCounts.begin(), danziCounts.end());

	for (int i=0; i<danziCounts.size(); i++)
	{
		cout << danziCounts[i] << "\n";
	}
	
}