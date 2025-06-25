#include <iostream>
#include <queue>
#include <vector>

using namespace std;
typedef pair<int, int> Node;

int N, M;
int maxSafeArea = 0;

vector<vector<int>> map;
vector<Node> emptySpace;

vector<Node> Directions = {{-1,0}, {1,0}, {0,-1}, {0,1}};

int Simulate(vector<vector<int>> tempMap)
{
	queue<Node> q;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (tempMap[i][j] == 2)
			{
				q.push(make_pair(i, j));
			}
		}
	}

	while (!q.empty())
	{
		Node temp = q.front(); 

		q.pop();

		for (auto n : Directions) 
		{
			int y = temp.first + n.first;
			int x = temp.second + n.second;

			if (y >= 0 && y <= N - 1)
			{
				if (x >= 0 && x <= M - 1)
				{
					if (tempMap[y][x] == 0)
					{
						tempMap[y][x] = 2;
						q.push(make_pair(y, x));
					}
				}
			}
		}
	}

	int safe = 0;
	for (int i=0; i<N; i++)
	{
		for (int j=0; j< M; j++)
		{
			if (tempMap[i][j] == 0)
			{
				safe++;
			}
		}
	}
	return safe;
}

void BuildWalls(int count, int start)
{
	if (count == 3)
	{
		vector<vector<int>> tempMap = map;
		maxSafeArea = max(maxSafeArea, Simulate(tempMap));
		return;
	}

	for (int i = start; i < emptySpace.size(); i++)
	{
		Node n = emptySpace[i];

		map[n.first][n.second] = 1;

		BuildWalls(count + 1, i + 1);

		map[n.first][n.second] = 0;
	}
}

int main()
{
	// 연구소는 N x M의 직사각형
	// 일부 칸은 바이러스가 있다.
	// 바이러스는 상하좌우 인접한 빈 칸으로 간다.

	// 벽은 3개 세울수 있고 꼭 3개를 세워야 한다.

	
	cin >> N >> M;

	map.resize(N, vector<int>(M, 0));

	for (int i=0; i<N; i++)
	{
		for (int j=0; j<M; j++)
		{
			cin >> map[i][j];

			if (map[i][j] == 0)
			{
				emptySpace.push_back(make_pair(i, j));
			}
		}
	}

	BuildWalls(0, 0);

	cout << maxSafeArea << "\n";

	return 0;
}