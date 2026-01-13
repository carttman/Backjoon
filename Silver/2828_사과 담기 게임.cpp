#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, j;
	cin >> n >> m >> j;

	int mn(1), mx(m);
	int res(0);
	for (int i = 0; i < j; i++)
	{
		int point;
		cin >> point;

		if (point < mn)
		{
			res += mn - point;
			mn = point;
			mx = mn + m - 1;
		}
		else if (point > mx)
		{
			res += point - mx;
			mx = point;
			mn = mx - m + 1;
		}
	}

	cout << res;

	return 0;
}