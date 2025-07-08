#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 100001;

int bfs(int start, int end)
{
	vector<bool> visited(MAX, false);

	queue<pair<int, int>> q;

	q.push({start, 0});
	visited[start] = true;

	while (!q.empty())
	{
		int current = q.front().first;
		int count = q.front().second;

		q.pop();

		if (current == end)
		{
			return count;
		}

		int next_pos[3] = {current - 1, current + 1, current * 2};

		for (int i=0; i<3; i++)
		{
			int next = next_pos[i];

			if (next >= 0 && next < MAX && !visited[next])
			{
				visited[next] = true;
				q.push({next, count + 1});
			}
		}
	}
}

int main()
{
	int n, k;
	cin >> n >> k;

	cout << bfs(n, k);


}