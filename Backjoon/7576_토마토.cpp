#include <iostream>
#include <queue>
using namespace std;

static int Row[4] = {1, 0, -1, 0};
static int Column[4] = {0, 1, 0, -1}; 

int Map[1001][1001] = {0,}; // ����
bool Visited[1001][1001] = {false,}; // �湮 üũ
int M, N; // row , column
vector<pair<int, int>> Temp; //���� �丶�� ��ǥ ����
int Day;

void BFS()
{
	queue<pair<int, int>> q;

	for(int i=0; i < Temp.size(); i++) // temp�� �����ص� ���� �丶�� ��ǥ ť�� �� �ִ´�.
	{
		q.push(make_pair(Temp[i].first, Temp[i].second)); // ���� ��ǥ ť�� ����
		Visited[Temp[i].first][Temp[i].second] = true;
	}

	while (!q.empty()) // ť�� �������� �ݺ�
	{
		int curr[2]; // ���� ��ǥ ����
		curr[0] = q.front().first; // column
		curr[1] = q.front().second; // row
		q.pop();

		for(int i=0; i<4; i++)
		{
			int newColumn = curr[0] + Column[i];
			int newRow = curr[1] + Row[i];

			if(newRow >= 0 && newColumn >= 0) // ��ȿ�� �� üũ 1
			{
				if(newRow < M && newColumn < N) // ��ȿ�� �� üũ 2
				{
					if(Map[newColumn][newRow] == 0) // ������ �丶������
					{
						if(!Visited[newColumn][newRow]) // �湮�ߴ� ������
						{
							Visited[newColumn][newRow] = true; // �湮 üũ

							Map[newColumn][newRow] = Map[curr[0]][curr[1]] + 1; // ���� �� + 1 ī����
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

			if(Map[i][j] == 0) // 0�� �ϳ��� ������
			{
				bIsFull = true;
			}

			if(k == 1) // ���� �丶�� ��ǥ�� Temp�� ��´�
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

	for (int i = 0; i < N; i++) //������ �丶�� �ִ��� üũ
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

// ����ؾ� �� ��
//1. ���� �丶�䰡 ������ ���� �� => ������������ ť�� ���� �ִ´�. (o)
//2. �丶�並 ���� ������ ���� ��� => ť�� ����µ��� �ʿ� 0�� ������ üũ�Ѵ�. (o)
//3. ����, ����� ������ ��� �丶�䰡 �;��ִ� �����̸� 0�� ��� (0)