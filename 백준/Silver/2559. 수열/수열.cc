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

	vector<int> b(n);
	b[0] = a[0];
	for (int i = 1; i < n; i++)
		b[i] = b[i - 1] + a[i];

	int mx = b[k - 1];

	for (int i = k; i < n; i++)
		mx = max(mx, b[i] - b[i - k]);

	cout << mx;

	return 0;
}