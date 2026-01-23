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

	sort(a.begin(), a.end());

	int x;
	cin >> x;

	int r = n - 1;
	int l = 0;
	int cnt = 0;
	while (l < r)
	{
		if (a[l] + a[r] == x)
		{
			cnt++;
			r--;
		}
		else if (a[l] + a[r] < x)
			l++;
		else
			r--;
	}

	cout << cnt;

	return 0;
}