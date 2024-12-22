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

	for(int i=0; i< M; i++) //인접 리스트 값 채우기
	{
		int Start, End;

		cin >> Start >> End;
		A[Start].push_back(End); // 양방향 그래프이므로 한번에 양쪽 값 넣는다.
		A[End].push_back(Start);
	}

	int count = 0;

	for(int i=1; i<=N; i++) // DFS 실행
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
	if(Visited[Vertex]) // 이미 방문했으면 취소
	{
		return;
	}

	Visited[Vertex] = true; // 방문 체크

	for(const int &i : A[Vertex]) // 
	{
		if(!Visited[i]) // 방문하지 않은 노드로 DFS 실행
		{
			DFS(i);
		}
	}
}