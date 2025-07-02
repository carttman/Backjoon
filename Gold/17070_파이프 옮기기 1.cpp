#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<int>> myMap;
int result = 0;

void dfs(int row, int col, int direction)
{
	if (row == n - 1 && col == n - 1)
	{
		result++;
		return;
	}

	if (direction == 0 || direction == 2)
	{
		if (col + 1 < n && myMap[row][col + 1] == 0)
		{
			dfs(row, col + 1, 0);
		}
	}

	if (direction == 1 || direction == 2)
	{
		if (row + 1 < n && myMap[row + 1][col] == 0)
		{
			dfs(row + 1, col, 1);
		}
	}

	if (row + 1 < n && col + 1 < n)
	{
		if(myMap[row + 1][col] == 0 && myMap[row][col+1] == 0)
		{
			if (myMap[row + 1][col + 1] == 0)
			{
				dfs(row + 1, col + 1, 2);
			}
		}
	}
	
}

int main()
{
	cin >> n;

	myMap.resize(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> myMap[i][j];
		}
	}

	dfs(0, 1, 0);

	cout << result << "\n";

	return 0;
}