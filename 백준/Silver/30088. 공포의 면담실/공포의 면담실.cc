#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<long long> a(n, 0);

	for (int i = 0; i < n; i++)
	{
		int nn;
		cin >> nn;
		for (int j = 0; j < nn; j++)
		{
			int tmp;
			cin >> tmp;

			a[i] += tmp;
		}
	}

	sort(a.begin(), a.end());

	vector<long long> b(n + 1);

	b[0] = a[0];
	for (int i = 1; i < n; i++)
		b[i] = b[i - 1] + a[i];

	long long sum = 0;

	for (int i = 0; i < n; i++)
		sum += b[i];

	cout << sum;

	return 0;
}