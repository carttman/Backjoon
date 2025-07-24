#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int MAX = 100000001;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<vector<pair<int, int>>> graph(n+1);
	priority_queue<pair<int, int>,  vector<pair<int, int>>,greater<pair<int, int>>> pq;
	vector<int> dist(n+1, MAX);

	for (int i=1; i<=m; i++)
	{
		int s, e, w;
		cin >> s >> e >> w;
		
		graph[s].push_back({e, w});
	}

	int start, end;
	cin >> start >> end;

	dist[start] = 0;
	//시작 (가중치, 시작노드)
	pq.push({0, start});

	while (!pq.empty())
	{
		//현재 가중치, 노드
		pair<int, int> currentNode = pq.top();
		int cw = currentNode.first;
		int cs = currentNode.second;

		pq.pop();

		if (cw > dist[cs])
			continue;

		for (const pair<int, int>& edge : graph[cs])
		{
			int nextNode = edge.first;
			int weight = edge.second;

			if (weight < MAX)
			{
				if (dist[nextNode] > cw + weight)
				{
					dist[nextNode] = cw + weight;
					pq.push({dist[nextNode], nextNode});
				}
			}
		}
	}

	cout << dist[end];

	return 0;
}