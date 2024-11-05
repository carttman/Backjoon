#include <iostream>
#include <queue>

using namespace std;

// 오, 아 , 왼 , 위(시계방향)
int Row[4] = {1, 0, -1, 0}; // x
int Column[4] = {0, 1, 0, -1}; // y

//맵, 방문 초기화
int Map[101][101];
bool Visited[101][101] = {false}; 

int N, M;

void BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y)); // 큐에 현재 좌표 삽입


	while(!q.empty()) // 큐가 빌때까지 반복
	{
		int curr[2]; //현재 좌표를 기억하고 큐에서 지운다
		curr[0] = q.front().first; // x
		curr[1] = q.front().second; // y
		q.pop();

		Visited[x][y] = true; // 현재 좌표 방문했다

		for(int i=0; i<4; i++) // 오 아 왼 위 탐색
		{
			int row = curr[0] + Row[i]; 
			int column = curr[1] + Column[i]; 

			if(row >= 0 && column >= 0) // 아예 없는 길인지 체크 1
			{
				if(column < N && row < M)// 아예 없는 길인지 체크 2
				{
					if(Map[column][row] != 0) // 갈 수 있는 길인지 체크
					{
						if(!Visited[column][row]) // 방문 한 곳인지 체크
						{
							Visited[column][row] = true; //방문했다

							Map[column][row] = Map[curr[1]][curr[0]] + 1; //
							q.push(make_pair(row, column));
						}
					}
				}
			}
		}
	}


}

int main()
{
	cin >> N >> M;

	for(int i=0; i < N; i++) // 4
	{
		string k;
		cin >> k;
		for(int j=0; j < M; j++) // 6
		{
			int a = k[j] - '0';
			Map[i][j] = a;
		}
	}

	BFS(0,0);

	cout << Map[N-1][M-1] << endl;
	return 0;
}