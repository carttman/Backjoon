#include <iostream>
#include <queue>
#include <vector>
#include <limits.h>

using namespace std;

int bfs(int start, vector<vector<int>>& graph, int users)
{
	vector<int> distance(users + 1, INT_MAX); // ���� ��� ~ ���� ����� �Ÿ�
	queue<int> q;
	distance[start] = 0; // �ڱ� �ڽŰ��� �Ÿ�

	q.push(start);

	while (!q.empty())
	{
		int current = q.front();

		q.pop();

		for (int i : graph[current]) // ����� ��� ���� ��ȸ
		{
			if (distance[i] == INT_MAX) // �湮 ���ߴٸ�
			{
				distance[i] = distance[current] + 1;
				q.push(i);
			}
		}
	}

	int total_distance = 0;
	for (int i=1; i<=users; i++)
	{
		total_distance += distance[i];
	}

	return total_distance;
}

int main()
{
	int users, m;

	cin >> users >> m;

	vector<vector<int>> graph(users+1);

	for (int i=0; i<m; i++)
	{
		int s, e;
		cin >> s >> e;

		graph[s].push_back(e);
		graph[e].push_back(s);
	}

	int minBacon = INT_MAX;
	int person = 0;

	for (int i=1; i<=users; i++)
	{
		int total_distance = bfs(i, graph, users);
		if (total_distance < minBacon)
		{
			minBacon = total_distance;
			person = i;
		}
	}

	cout << person << "\n";
	return 0;
}