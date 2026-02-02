#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ll x, y;
	cin >> x >> y;

	ll z = (100 * y) / x;

	if (z >= 99)
		cout << -1;
	else
	{
		ll s = 0;
		ll e = 1000000000;

		while (s <= e)
		{
			ll mid = (s + e) / 2;

			int tmp = (100 * (y + mid)) / (x + mid);

			if (tmp > z)
				e = mid - 1;
			else
				s = mid + 1;
		}

		cout << s;
	}

	return 0;
}