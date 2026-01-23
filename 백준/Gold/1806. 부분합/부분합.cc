#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s;
	cin >> n >> s;

	vector<int> a(100001);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int start = 0; int end = 0;
	int ans = INT_MAX;
	int sum = a[0];

	while (start <= end && end <= n)
	{
		if (sum >= s)
			ans = min(ans, end - start + 1);

		if (sum < s)
		{
			end++;
			sum += a[end];
		}
		else
		{
			sum -= a[start];
			start++;
		}
	}

	if (ans == INT_MAX)
		cout << 0;
	else
		cout << ans;

	return 0;
}