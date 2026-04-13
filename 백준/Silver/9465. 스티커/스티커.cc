#include <iostream>
#include <vector>

using namespace std;

int a[2][100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		for (int i = 0; i < 2; i++)
			for (int j = 1; j <= n; j++)
				cin >> a[i][j];

		for (int i = 2; i <= n; i++)
		{
			a[0][i] += max(a[1][i - 1], a[1][i - 2]);
			a[1][i] += max(a[0][i - 1], a[0][i - 2]);
		}

		cout << max(a[0][n], a[1][n]) << '\n';
	}
}