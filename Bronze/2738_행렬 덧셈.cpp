#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> matrix(n*m + 1);

	for (int i=1; i<= n * m; i++)
	{
		cin >> matrix[i];
	}

	for (int i=1; i<=n*m; i++)
	{
		int num;
		cin >> num;
		matrix[i] += num;
	}

	for (int i=1; i<=n*m; i++)
	{
		if (i % 3)
		{
			cout << matrix[i] << " ";
		}
		else
		{
			cout << matrix[i];
			cout << "\n";
		}
	}

	return 0;
}