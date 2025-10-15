#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> myMap;
vector<bool> My_Visited;
void DFS(int Vertex);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	myMap.resize(N+1);

	My_Visited = vector<bool>(N + 1, false);

	for(int i=0; i< M; i++) //���� ����Ʈ �� ä���
	{
		int Start, End;

		cin >> Start >> End;
		myMap[Start].push_back(End); // ����� �׷����̹Ƿ� �ѹ��� ���� �� �ִ´�.
		myMap[End].push_back(Start);
	}

	int count = 0;

	for(int i=1; i<=N; i++) // DFS ����
	{
		if(!My_Visited[i])
		{
			count++;
			DFS(i);
		}
	}

	cout << count;
}


void DFS(int Vertex)
{
	if(My_Visited[Vertex]) // �̹� �湮������ ���
	{
		return;
	}

	My_Visited[Vertex] = true; // �湮 üũ

	for(const int &i : myMap[Vertex]) // 
	{
		if(!My_Visited[i]) // �湮���� ���� ���� DFS ����
		{
			DFS(i);
		}
	}
}