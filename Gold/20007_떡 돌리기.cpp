#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

constexpr int max_size = 10000001;

struct cmp
{
	bool operator()(pair<int, int>& a, pair<int, int>& b) const
	{
		if (a.second == b.second)
		{
			return a.first > b.first;
		}

		return a.second > b.second;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, x, y;
	cin >> n >> m >> x >> y;

	vector<vector<pair<int,int>>> graph(n);
	vector<int> dist(n, max_size);
	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

	pq.emplace(y, 0);
	dist[y] = 0;


	for (int i=0; i<m; i++)
	{
		int s, e, v;
		cin >> s >> e >> v;
		graph[s].emplace_back(e, v);
		graph[e].emplace_back(s, v);
	}

	while (!pq.empty())
	{
		pair<int, int> curr_edge = pq.top();
		int curr_node = curr_edge.first;
		int curr_weight = curr_edge.second;

		pq.pop();

		for (const pair<int,int>& edge : graph[curr_node])
		{
			int next_node = edge.first;
			int next_weight = edge.second;

			if (dist[next_node] > curr_weight + next_weight)
			{
				dist[next_node] = curr_weight + next_weight;

				pq.emplace(next_node, dist[next_node]);
			}
		}
	}

	for (const int& value : dist)
	{
		if (x < value)
		{
			cout << -1;
			return 0;
		}
	}

	sort(dist.begin(), dist.end());

	int sum = 0;
	int day = 1;
	for (const int& n : dist)
	{
		sum += n * 2;
		if (x < sum)
		{
			day++;
			sum = n * 2;
		}
	}

	cout << day;

	return 0;
}