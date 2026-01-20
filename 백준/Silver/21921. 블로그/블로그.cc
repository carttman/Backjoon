#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x;
	cin >> n >> x;

	vector<int> a(n + 1);

	for (int i = 1; i <= n; i++)
	{
		int tmp;
		cin >> tmp;

		a[i] = a[i - 1] + tmp;
	}

	int mx = 0;
	int cnt = 1;
	for (int i = x; i <= n; i++)
	{
		if (mx < a[i] - a[i - x])
		{
			mx = a[i] - a[i - x];
			cnt = 1;
		}
		else if (mx == a[i] - a[i - x])
			cnt++;

		mx = max(mx, a[i] - a[i - x]);
	}

	if (!mx)
		cout << "SAD";
	else
		cout << mx << '\n' << cnt;

	return 0;
}