#include <bits/stdc++.h>

using namespace std;

int flag, cnt, coupon, mx = 0;
int a[300001];
int chk[3001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, d, k, c;
	cin >> n >> d >> k >> c;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		flag = 0;
		coupon = 1;

		for (int j = i; j < i + k; j++)
		{
			if (chk[a[j % n]] == 1)
				flag++;
			else
				chk[a[j % n]] = 1;

			if (a[j % n] == c)
				coupon = 0;
		}

		mx = max(mx, k - flag + coupon);
		memset(chk, 0, sizeof(chk));
	}

	cout << mx;
	return 0;
}