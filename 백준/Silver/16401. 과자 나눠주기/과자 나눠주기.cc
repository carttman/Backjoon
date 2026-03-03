//#include <stdio.h>
//#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	vector<int> snacks(n);

	for (int i = 0; i < n; i++)
		cin >> snacks[i];

	sort(snacks.begin(), snacks.end());

	int left = 1;
	int right = snacks[n-1];

	int res = 0;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		int cnt = 0;
		for (int i = 0; i < n; i++)
			cnt += snacks[i] / mid;

		if (cnt < m)
			right = mid - 1;
		else
		{
			res = mid;
			left = mid + 1;
		}
	}

	cout << res;
	return 0;
}