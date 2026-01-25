#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n, m;
		cin >> n >> m;

		vector<int> a(n);
		for (int i=0; i<n; i++)
			cin >> a[i];

		vector<int> b(m);
		for (int i=0; i<m; i++)
			cin >> b[i];

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		int cnt = 0;
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<m; j++)
			{
				if (a[i] > b[j])
					cnt++;
				else
					break;
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}