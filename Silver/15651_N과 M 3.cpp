#include <iostream>

using namespace std;

int n, m;
int Numbers[7];

void BackTracking(int start)
{
	if (start == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << Numbers[i] + 1 << " ";
		}
		cout << '\n';

		return;
	}

	for (int i = 0; i < n; i++)
	{
		Numbers[start] = i;

		BackTracking(start + 1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	BackTracking(0);

	return 0;
}