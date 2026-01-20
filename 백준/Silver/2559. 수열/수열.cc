#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<int> a(n + 1, 0);

	for (int i = 1; i <= n; i++)
	{
		int tmp;
		cin >> tmp;
		a[i] = a[i - 1] + tmp;
	}

	int mx = a[k];

	for (int i = k + 1; i <= n; i++)
		mx = max(mx, a[i] - a[i - k]);

	cout << mx;

	return 0;
}