#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> A; // 데이터 저장 인접 리스트
vector<bool> My_Visited; // 방문 배열 
bool Arrive; // 도착 확인

void DFS(int now, int depth);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	Arrive = false;
	cin >> N >> M;

	A.resize(N);
	My_Visited = vector<bool>(N, false);

	for(int i=0; i<M; i++)
	{
		int Start, End;
		cin >> Start >> End;

		A[Start].push_back(End); // 양방향 그래프이므로 양쪽 모두 저장
		A[End].push_back(Start);
	}

	for(int i=0; i<N; i++) // 모든 노드 DFS 실행
	{
		DFS(i, 1); 

		if(Arrive) //이미 도착했다면 종료
		{
			break;
		}
	}

	if(Arrive) 
	{
		cout << 1 << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}

}

void DFS(int now, int depth)
{
	if(depth == 5 || Arrive) // depth가 5까지 왔다면 도착 확인한다.
	{
		Arrive = true;
		return;
	}
	My_Visited[now] = true; // 방문 체크

	for(const int &i : A[now]) //방문 하지 않은 노드 찾아서 depth 올리고 DFS 실행한다.
	{
		if(!My_Visited[i])
		{
			DFS(i, depth + 1);
		}
	}

	My_Visited[now] = false;
}
