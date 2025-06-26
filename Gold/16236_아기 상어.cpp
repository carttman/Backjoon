#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> Node;

vector<Node> directions = { {1, 0} , {-1, 0}, {0, -1}, {0, 1}};


int main()
{
	int N, M;
	cin >> N;
	vector<vector<int>> myMap(N, vector<int>(N, 0));

	queue<Node> q;

	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			cin >> M;

			if (M != 0)
			{
				myMap[i][j] = M;
			}
			if (M == 9)
			{
				q.push({i, j});
			}
		}
	}

	bool flag = 0;
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			if (myMap[i][j] != 0)
			{
				if (myMap[i][j] <= 2)
				{
					flag = 1;
				}
			}
		}
	}

	if (flag == 1)
	{
		cout << 0 << "\n";

		return 0;
	}

	while (!q.empty())
	{
		Node temp = q.front();

		q.pop();

		for (int i=0; i<4; i++)
		{
			int dx = temp.second + directions[i].second;
			int dy = temp.first + directions[i].first;

			if (dx >= 0 && dx <N)
			{
				if (dy >= 0 && dy < N)
				{
					//for (int j=0; j<)
					q.push({dy, dx});
				}
			}
		}
	}
}