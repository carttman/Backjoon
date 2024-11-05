#include <iostream>
#include <queue>

using namespace std;

// ��, �� , �� , ��(�ð����)
int Row[4] = {1, 0, -1, 0}; // x
int Column[4] = {0, 1, 0, -1}; // y

//��, �湮 �ʱ�ȭ
int Map[101][101];
bool Visited[101][101] = {false}; 

int N, M;

void BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y)); // ť�� ���� ��ǥ ����


	while(!q.empty()) // ť�� �������� �ݺ�
	{
		int curr[2]; //���� ��ǥ�� ����ϰ� ť���� �����
		curr[0] = q.front().first; // x
		curr[1] = q.front().second; // y
		q.pop();

		Visited[x][y] = true; // ���� ��ǥ �湮�ߴ�

		for(int i=0; i<4; i++) // �� �� �� �� Ž��
		{
			int row = curr[0] + Row[i]; 
			int column = curr[1] + Column[i]; 

			if(row >= 0 && column >= 0) // �ƿ� ���� ������ üũ 1
			{
				if(column < N && row < M)// �ƿ� ���� ������ üũ 2
				{
					if(Map[column][row] != 0) // �� �� �ִ� ������ üũ
					{
						if(!Visited[column][row]) // �湮 �� ������ üũ
						{
							Visited[column][row] = true; //�湮�ߴ�

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