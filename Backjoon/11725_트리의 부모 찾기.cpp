#include <iostream>
#include <vector>

using namespace std;

vector<int> Parent(100001, 0);
vector<bool> Visited(100001, false);
vector<vector<int>> Tree(100001, vector<int>(0));

void dfs(int Node)
{	//방문 체크
	Visited[Node] = true;

	// 트리 순회
	for (int i = 0; i < Tree[Node].size(); i++)
	{	// 다음 노드 저장
		int next = Tree[Node][i];

		// 다음 노드 방문 안했으면 
		if (!Visited[next])
		{	// 부모노드 배열에 현재 노드 저장 
			Parent[next] = Node;
			dfs(next);
		}
	}
}

int main()
{
	int N;
	cin >> N;

	//데이터 저장
	for (int i=0; i<N-1; i++)
	{
		int x, y;
		cin >> x >> y;

		Tree[x].push_back(y);
		Tree[y].push_back(x);
	}

	dfs(1);

	//각 노드의 부모 노드 출력
	for (int i=2; i<=N; i++)
	{
		cout << Parent[i] << "\n";
	}
}