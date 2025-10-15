#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> Graph;
vector<int> Visited;
queue<int> q;

int cnt = 0;
void BFS(int current)
{
	q.push(current);
	Visited[current] = ++cnt;

	while (!q.empty())
	{
		int cur = q.front();

		q.pop();

		for (int i=0; i<Graph[cur].size(); i++)
		{
			int next = Graph[cur][i];
			if (!Visited[next])
			{
				q.push(next);
				Visited[next] = ++cnt;
			}
		}
	}
}

int main()
{
	int n, m, r;
	cin >> n >> m >> r;

	Graph.resize(n+1);
	Visited.resize(n+1, 0);

	for (int i=0; i<m; i++)
	{
		int u, v;
		cin >> u >> v;

		Graph[u].push_back(v);
		Graph[v].push_back(u);
	}

	for (int i=1; i<=n; i++)
		sort(Graph[i].begin(), Graph[i].end(), greater<>());


	BFS(r);

	for (int i=1; i<=n; i++)
		cout << Visited[i] << '\n';

	return 0;
}