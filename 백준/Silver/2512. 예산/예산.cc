#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int m;
	cin >> m;

	sort(a.begin(), a.end());

	int s = 0;
	int e = a[n - 1];
	int res, sum;

	while (s <= e)
	{
		sum = 0;

		int mid = (s + e) / 2;

		for (int i = 0; i < n; i++)
			sum += min(a[i], mid);

		if (m >= sum)
		{
			res = mid;
			s = mid + 1;
		}
		else
			e = mid - 1;
	}

	cout << res;
	return 0;
}