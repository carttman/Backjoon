#include <iostream>
#include <queue>
using namespace std;

static int Row[4] = {1, 0, -1, 0};
static int Column[4] = {0, 1, 0, -1}; 

int Map[1001][1001] = {0,}; // 지도
bool Visited[1001][1001] = {false,}; // 방문 체크
int M, N; // row , column
vector<pair<int, int>> Temp; //익은 토마토 좌표 저장
int Day;

void BFS()
{
	queue<pair<int, int>> q;

	for(int i=0; i < Temp.size(); i++) // temp에 저장해둔 익은 토마토 좌표 큐에 다 넣는다.
	{
		q.push(make_pair(Temp[i].first, Temp[i].second)); // 현재 좌표 큐에 저장
		Visited[Temp[i].first][Temp[i].second] = true;
	}

	while (!q.empty()) // 큐가 빌때까지 반복
	{
		int curr[2]; // 현재 좌표 저장
		curr[0] = q.front().first; // column
		curr[1] = q.front().second; // row
		q.pop();

		for(int i=0; i<4; i++)
		{
			int newColumn = curr[0] + Column[i];
			int newRow = curr[1] + Row[i];

			if(newRow >= 0 && newColumn >= 0) // 유효한 길 체크 1
			{
				if(newRow < M && newColumn < N) // 유효한 길 체크 2
				{
					if(Map[newColumn][newRow] == 0) // 안익은 토마토인지
					{
						if(!Visited[newColumn][newRow]) // 방문했던 길인지
						{
							Visited[newColumn][newRow] = true; // 방문 체크

							Map[newColumn][newRow] = Map[curr[0]][curr[1]] + 1; // 이전 길 + 1 카운팅
							Day = Map[newColumn][newRow];
							q.push(make_pair(newColumn, newRow));
							//cout << Map[newColumn][newRow] << endl;
						}
					}
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	bool bIsFull = false;

	cin >> M >> N;

	for(int i=0; i < N; i++) // column
	{
		for(int j=0; j < M; j++) // row
		{
			int k;
			cin >> k;

			Map[i][j] = k;

			if(Map[i][j] == 0) // 0이 하나라도 있으면
			{
				bIsFull = true;
			}

			if(k == 1) // 익은 토마토 좌표를 Temp에 담는다
			{
				Temp.push_back(make_pair(i, j));
			}
		}
	}

	if(!bIsFull)
	{
		cout << 0;
		return 0;
	}
	
	BFS();

	for (int i = 0; i < N; i++) //안익은 토마토 있는지 체크
	{
		for (int j = 0; j < M; j++)
		{
			if (Map[i][j] == 0)
			{
				cout << -1;
				return 0;
			}
		}
	}

	cout << Day-1;
}

// 고려해야 할 것
//1. 익은 토마토가 여러개 있을 때 => 시작지점들을 큐에 전부 넣는다. (o)
//2. 토마토를 전부 익히지 못할 경우 => 큐가 비었는데도 맵에 0이 있음을 체크한다. (o)
//3. 만약, 저장될 때부터 모든 토마토가 익어있는 상태이면 0을 출력 (0)