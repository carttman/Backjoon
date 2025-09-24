#include <iostream>

using namespace std;

int n, m;
bool Visited[8];
int numbers[8];

void BackTracking(int currSize)
{
	if (currSize == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << numbers[i] + 1 << ' ';
		}
		cout << '\n';

		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (!Visited[i])
		{
			Visited[i] = true;
			numbers[currSize] = i;

			BackTracking(currSize + 1);

			Visited[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;

	BackTracking(0);

	return 0;
}