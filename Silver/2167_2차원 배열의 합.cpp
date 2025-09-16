#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> arr(n+1, vector<int>(m+1, 0));

	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			cin >> arr[i][j];
		}
	}

	int k;
	cin >> k;

	for (int i=0; i<k; i++)
	{
		int x1, y1, x2, y2;
		cin >> y1 >> x1 >> y2 >> x2;

		int sum = 0;
		for (int i= y1; i<=y2; i++)
		{
			for (int j=x1; j<=x2; j++)
			{
				sum += arr[i][j];
			}
		}

		cout << sum << '\n';
	}


	return 0;
}