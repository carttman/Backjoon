#include <iostream>
#include <queue>
#include <vector>
#include <limits.h>
using namespace std;

typedef pair<int, int> edge;
int N, M;
vector<int> dist;
vector<bool> visited;
vector<vector<edge>> mlist;
int dijkstra(int start, int end);


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	dist.resize(N + 1);
	fill(dist.begin(), dist.end(), INT_MAX);

	visited.resize(N + 1);
	fill(visited.begin(), visited.end(), false);
	mlist.resize(N + 1);

	for ( int i=0; i<M; i++)
	{
		int start, end, weight;
		cin >> start >> end >> weight;
		mlist[start].push_back(make_pair(end, weight));
	}
	int startIndex, endIndex;
	cin >> startIndex >> endIndex;

	int result = dijkstra(startIndex, endIndex);
	cout << result << "\n";
}

int dijkstra(int start, int end)
{
	priority_queue<edge, vector<edge>, greater<edge>> pq;

	pq.push(make_pair(0, start));
	dist[start] = 0;

	while (!pq.empty())
	{
		edge nownode = pq.top();
		pq.pop();
		int now = nownode.second;

		if (!visited[now])
		{
			visited[now] = true;

			for (edge n : mlist[now])
			{
				if (!visited[n.first] && dist[n.first] > dist[now] + n.second)
				{
					dist[n.first] = dist[now] + n.second;
					pq.push(make_pair(dist[n.first], n.first));
				}
			}
		}
	}

	return dist[end];
}
