#include <iostream>
#include <climits>
using namespace std;

int n, m, r;
int Item[101];
int Distance[101][101];

void Floyd()
{
	for (int k=1; k<=n; k++)
	{
		for (int s=1; s<=n; s++)
		{
			for (int e=1; e<=n; e++)
			{
				if (s==e || s==k || k==e || Distance[s][k] == INT_MAX || Distance[k][e] == INT_MAX)
				{
					continue;
				}

				Distance[s][e] = min(Distance[s][e], Distance[s][k] + Distance[k][e]);
			}
		}
	}
}

int main()
{

	cin >> n >> m >> r;

	for (int i=1; i<= n; i++)
	{
		cin >> Item[i];
	}

	for (int i=1; i<= n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if (i==j)
			{
				continue;
			}

			Distance[i][j] = INT_MAX;
		}
	}

	for (int i=0; i<r; i++)
	{
		int s, e, w;

		cin >> s >> e >> w;

		Distance[s][e] = w;
		Distance[e][s] = w;
	}

	Floyd();

	int maxItem = 0;

	for (int s=1; s<=n; s++)
	{
		int sum = 0;
		for (int e = 1; e <= n; e++)
		{
			if (Distance[s][e] > m)
			{
				continue;
			}

			sum += Item[e];
		}

		if (sum > maxItem)
		{
			maxItem = sum;
		}
	}

	cout << maxItem;
} 