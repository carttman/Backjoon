#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int A, B;
int Vis[10000];

void bfs()
{
	queue<pair<int, string>> q;
	q.push({ A, "" });
	Vis[A] = 1;

	while (!q.empty())
	{
		int num = q.front().first;
		string s = q.front().second;

		if (num == B)
		{
			cout << s << '\n';
			return;
		}

		q.pop();

		int D, S, L, R;

		D = (num * 2) % 10000;
		if (!Vis[D])
		{
			Vis[D] = 1;
			q.push({ D, s + 'D' });
		}

		S = num - 1;
		if (S == -1)
			S = 9999;
		if (!Vis[S])
		{
			Vis[S] = 1;
			q.push({ S, s + 'S' });
		}

		L = (num * 10) % 10000 + num / 1000;
		if (!Vis[L])
		{
			Vis[L] = 1;
			q.push({ L, s + 'L' });
		}

		R = num / 10 + (num % 10) * 1000;
		if (!Vis[R])
		{
			Vis[R] = 1;
			q.push({ R, s + 'R' });
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		cin >> A >> B;
		bfs();
		memset(Vis, 0, sizeof(Vis));
	}

	return 0;
}
