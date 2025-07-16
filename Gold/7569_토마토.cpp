#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n, h;
	cin >> m >> n >> h;

	int mymap[101][101][101] = {};

	typedef tuple<int, int, int> Node;
	queue<Node> q;

	bool flag = false;
	for (int i=0; i<h; i++)
	{
		for (int j=0; j<n; j++)
		{
			for (int k=0; k<m; k++)
			{
				cin >> mymap[i][j][k];

				if (mymap[i][j][k] == 0)
				{
					flag = true;
				}

				if (mymap[i][j][k] == 1)
				{
					q.push({i, j, k});
				}
			}
		}
	}

	if (!flag)
	{
		cout << 0;
		return 0;
	}
	// {h, r, c}
	vector<Node> Dir = {{ -1, 0, 0}, {1, 0, 0},{0, -1, 0},{0, 1, 0},{0, 0, -1},{0, 0, 1}};

	while (!q.empty())
	{
		Node curr = q.front();

		int currH = get<0>(curr);
		int currR = get<1>(curr);
		int currC = get<2>(curr);

		q.pop();

		for (int i=0; i<6; i++)
		{
			int nextH = currH + get<0>(Dir[i]);
			int nextR = currR + get<1>(Dir[i]);
			int nextC = currC + get<2>(Dir[i]);

			if (nextH >= 0 && nextH < h && nextR >= 0 && nextR < n && nextC >= 0 && nextC < m)
			{
				if (!mymap[nextH][nextR][nextC])
				{
					
					mymap[nextH][nextR][nextC] = mymap[currH][currR][currC] + 1;

					q.push({nextH, nextR, nextC});
					
				}
			}
		}
	}

	int cnt = 0;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (mymap[i][j][k])
				{
					cnt = max(cnt, mymap[i][j][k]);
				}
				else
				{
					cout << -1;
					return 0;
				}
			}
		}
	}

	cout << cnt-1;

	return 0;
}