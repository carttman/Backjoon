#include <iostream>
#include <vector>

using namespace std;

int MAX = 100001;

int main()
{
	int n, m, x, y;

	cin >> n >> m >> x >> y;
	vector<vector<int>> graph(n, vector<int>(n, MAX));

	for (int i=0; i<m; i++)
	{
		int s, e, v;
		cin >> s >> e >> v;

		graph[s][e] = v;
		graph[e][s] = v;
	}

	cout << 1;

}