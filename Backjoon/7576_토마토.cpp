#include <iostream>
#include <queue>

using namespace std;

static int row[4] = {1, 0, -1, 0};
static int column[4] = {0, 1, 0, -1};

int Map[1001][1001] = {0,};
bool Visited[1001][1001] = {false,};
int M, N; // row , column


void BFS(int row, int column)
{
	queue<pair<int, int>> q;
	q.push(make_pair(row, column)); // 현재 좌표 큐에 저장

	
	Visited[row][column] = true; // 방문 체크

	while (!q.empty())
	{
		if()
		{
			
		}
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> M >> N;

	for(int i=0; i < N; i++)
	{
		for(int j=0; j < M; j++)
		{
			int k;
			cin >> k;

			Map[i][j] = k;
		}
	}

	//BFS()
}