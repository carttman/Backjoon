#include <iostream>
#include <vector>

using namespace std;

int N;
int M;
int cnt;
vector<vector<int>> myMap;
vector<bool> Visited;

void DFS(int start);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin >> M;

	myMap.resize(N+1);
	Visited.resize(N+1, false);

	for (int i=1; i<=M; i++)
	{
		int a, b;
		cin >> a >> b;

		myMap[a].push_back(b);
		myMap[b].push_back(a);
	}

	DFS(1);
	cout << cnt;
}

void DFS(int start)
{
	//���� ��� �湮üũ
	Visited[start] = true;

	for (int i=0; i < myMap[start].size(); i++)
	{
		int next = myMap[start][i];
		//������� �湮���� �ʾҴٸ� DFS ���� 
		if (!Visited[next])
		{
			cnt++;
			DFS(next);
		}
	}
}