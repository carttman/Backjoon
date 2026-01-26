#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int l = 0;
	int r = k - 1;
	int sum = 0;

	for (int i = 0; i < k; i++)
		sum += a[i];

	int mx = sum;

	while (true)
	{
		sum -= a[l];
		l = (l + 1) % n;

		r = (r + 1) % n;
		sum += a[r];

		if (l == 0)
			break;

		mx = max(mx, sum);
	}

	cout << mx;

	return 0;
}