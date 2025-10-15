#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> edge;
vector<vector <edge>> A;
vector<bool> My_Visited;
vector<int> My_Distance; // 거리 저장 배열

void BFS(int node);


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	A.resize(N+1);

	for(int i=0; i<N; i++)
	{
		int S;
		cin >> S;

		while(true) // 
		{
			int E, V;
			cin >> E;

			if(E == -1)
			{
				break;
			}

			cin >> V;
			A[S].push_back(edge(E, V)); // 간선과 정점 형태로 배열에 저장
		}
	}

	My_Distance = vector<int>(N + 1, 0);
	My_Visited = vector<bool>(N+1, false);
	BFS(1); // 임의의 점으로 BFS 실행

	int My_Max = 1; // BFS를 1로 시작했으니 1 저장

	for(int i = 2; i <= N; i++)
	{
		if(My_Distance[My_Max] < My_Distance[i]) // 현재 거리가 큰 인덱스를 저장
		{
			My_Max = i;
		}
	}

	fill(My_Distance.begin(), My_Distance.end(), 0); // 거리, 방문 배열 초기화
	fill(My_Visited.begin(), My_Visited.end(), false); 

	BFS(My_Max); //큰 값을 시작점으로 BFS 다시 시작

	sort(My_Distance.begin(), My_Distance.end());

	cout << My_Distance[N] << '\n';

}

void BFS(int node)
{
	queue<int> myQueue;
	myQueue.push(node); // 큐에 현재노드 저장
	My_Visited[node] = true; // 방문 체크


	while(!myQueue.empty()) // 큐가 빌 때까지 반복
	{
		int now_node = myQueue.front();
		myQueue.pop();
		for(const edge &i : A[now_node]) //현재 노드의 연결 노드 탐색
		{
			if(!My_Visited[i.first]) //방문하지 않았다면
			{
				My_Visited[i.first] = true; // 방문 체크 후 큐에 데이터 삽입
				myQueue.push(i.first);
				My_Distance[i.first] = My_Distance[now_node] + i.second; // 현재 노드의 거리 + 가중치로 방문하지 않은 노드 거리로 업데이트
			}
		}
	}
}
