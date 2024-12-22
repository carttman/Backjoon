#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> A;
vector<bool> Visited;
void DFS(int Vertex);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	A.resize(N+1);

	Visited = vector<bool>(N + 1, false);

	for(int i=0; i< M; i++) //���� ����Ʈ �� ä���
	{
		int Start, End;

		cin >> Start >> End;
		A[Start].push_back(End); // ����� �׷����̹Ƿ� �ѹ��� ���� �� �ִ´�.
		A[End].push_back(Start);
	}

	int count = 0;

	for(int i=1; i<=N; i++) // DFS ����
	{
		if(!Visited[i])
		{
			count++;
			DFS(i);
		}
	}

	cout << count;
}


void DFS(int Vertex)
{
	if(Visited[Vertex]) // �̹� �湮������ ���
	{
		return;
	}

	Visited[Vertex] = true; // �湮 üũ

	for(const int &i : A[Vertex]) // 
	{
		if(!Visited[i]) // �湮���� ���� ���� DFS ����
		{
			DFS(i);
		}
	}
}