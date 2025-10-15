#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<vector<int>> myMap;
vector<bool> My_Visited;
bool Arrive;
void DFS(int node);
void BFS(int node);


int main()
{
	ios::sync_with_stdio(false);

	int N, M, Start;
	Arrive = false;
	cin >> N >> M >> Start;
	myMap.resize(N + 1);

	for(int i=0; i < M; i++)
	{
		int start, end;
		cin >> start >> end;

		myMap[start].push_back(end);
		myMap[end].push_back(start);
	}

	for(int i=0; i<=N; i++) // 방문 노드가 여러 개일 때는 번호가 작은 것을 먼저 방문하기 위해 정렬한다.
	{
		sort(myMap[i].begin(), myMap[i].end());
	}

	My_Visited = vector<bool>(N + 1, false);

	DFS(Start);
	cout << "\n";
	fill(My_Visited.begin(), My_Visited.end(), false);
	BFS(Start);
	cout << "\n";
}

void DFS(int node)
{
	cout << node << " ";
	My_Visited[node] = true;

	for(const int &i : myMap[node])
	{
		if(!My_Visited[i])
		{
			DFS(i);
		}
	}
}

void BFS(int node)
{
	queue<int> myQueue;
	myQueue.push(node);
	My_Visited[node] = true;

	while(!myQueue.empty())
	{
		int now_node = myQueue.front();
		myQueue.pop();
		cout<<now_node<<"\n";
		for(const int &i : myMap[now_node])
		{
			if(!My_Visited[i])
			{
				My_Visited[i] = true;
				myQueue.push(i);
			}
		}
	}
}